#include <iostream>
#include <map>
#include <thread>
#include <functional>
#include <chrono>
#include <mutex>

using namespace std;

// A mutex azért van, hogy amíg ez a függvény dolgozik, addig másik szál ne érhesse el a map tartalmát.
// Ezt itt meg is kell oldani.
void generateDataPart(map<int,int> &data, int count, mutex *m=0)
{

    for (int i=0; i<count; i++){
        m->lock();
		data[rand()%256]++;
        m->unlock();
    }
}

// Itt a mutex csak azért van, hogy átadhassa a másik függvénynek.
// Ezt a függvényt nem kell módosítani.
void generateDataComplete(map<int,int> &data, int totalcount, mutex *m=0)
{
	int generated=0;
	while (generated<totalcount)
	{
		if (generated+1000<=totalcount)
		{
			generateDataPart(data,1000,m);
			generated+=1000;
		}
		else
		{
			generateDataPart(data,totalcount-generated,m);
			generated=totalcount;
		}
	}
}

int main()
{
    chrono::system_clock::time_point start = chrono::system_clock::now();
    mutex m1, m2;
	srand(time(0));
	map<int,int> histogram; // A map, ami a hisztogrammot tárolja. A kulcs nem lesz fontos, az értékekkel kell csak dolgozni, azok tárolják a darabszámot.
	int total_generation_count = 8000000;
    auto gen = [&m1, &m2, &histogram](int totalcount) -> void {m1.lock(); generateDataComplete(histogram, totalcount, &m2); m1.unlock();};
    auto gen_check = [&m1, &m2, &histogram, total_generation_count]() -> void {
        while(true){
            this_thread::sleep_for(chrono::milliseconds(50));
            if(m1.try_lock()){
                m1.unlock();
                //cout << "Finished!" << endl;
                break;
            }
            m2.lock();
            int gen_count = 0;
            for(auto d : histogram){
                gen_count += d.second;
            }
            cout << "Processed pixels: " << gen_count << " (" << gen_count / (float)total_generation_count * 100 << " %)" << endl;
            m2.unlock();
        }
    };
    thread genData(gen, total_generation_count);
    thread checkGen(gen_check);
    genData.join();
    checkGen.join();
    chrono::system_clock::time_point end = chrono::system_clock::now();
	// Példa a függvény meghívására (mutex nélkül).
	// generateDataComplete(histogram,total_generation_count);
	/* Példa kimenet (a többszálasítás miatt a pontos értékek változhatnak):
	Processed pixels: 1252000 (15.65 %)
	Processed pixels: 1450000 (18.125 %)
	Processed pixels: 1924000 (24.05 %)
	Processed pixels: 2872000 (35.9 %)
	Processed pixels: 3077000 (38.4625 %)
	Processed pixels: 3482000 (43.525 %)
	Processed pixels: 4519000 (56.4875 %)
	Processed pixels: 5259000 (65.7375 %)
	Processed pixels: 6377000 (79.7125 %)
	Processed pixels: 6620000 (82.75 %)
	Processed pixels: 6801000 (85.0125 %)
	Processed pixels: 7021000 (87.7625 %)
	Processed pixels: 7384000 (92.3 %)
	Processed pixels: 8000000 (100 %)
	*/

    chrono::duration<double> elapsed = end - start;
    cout << "Program finished in " << elapsed.count() << " seconds" << endl;
	// Itt kell kiírni, hogy mennyi idő alatt jutott el a program idáig. Például:
	// Program finished in 2.68757 seconds

	return 0;
}
