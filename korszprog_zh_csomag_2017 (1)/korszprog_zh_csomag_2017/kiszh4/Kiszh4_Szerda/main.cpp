#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include<vector>
#include<string>

using namespace std;

vector<vector<int>> _data;

void download(const string &file_name, mutex *m)
{
    m->lock();
    srand(time(0));
    int size = rand() % 5000 + 25000;
    int downloaded = 0;
    cout << "Downloading file " << file_name << " with size: " << size << endl;
    while(downloaded < size){
        downloaded += rand() % 1000;
        vector<int> v(100);
        _data.push_back(v);
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    m->unlock();
}

void integrityCheck(int* bad, const string& file_name){
    for(auto data_vector : _data){
        for(auto d : data_vector){
            if(rand() % 100 < 3) (*bad)++;
        }
    }
}

//ide írd meg a letöltési folyamatot ellenőrző függvényt
void progress_check(string filename, mutex *mtx){
    while(1){
        if(!mtx->try_lock()){
            this_thread::sleep_for(chrono::milliseconds(500));
            cout << "Downloading file: " << filename << endl;
        }
            cout << "Finished downloading file!" << endl;
            mtx->unlock();
    }
}
int main()
{
    mutex mtx;
    const string& file_name = "half_life_3.exe";
    //itt hívd meg a download és a letöltést ellenőrző függvényeket, csatold vissza őket a fő szálba
    thread t1(download,file_name,&mtx);
    thread t2 (progress_check,file_name,&mtx);
    t1.join();
    t2.join();
    //a konzol kiíratások az értékek véletlenszerű generálása miatt változhatnak!
    /*
    Downloading file half_life_3.exe with size: 25411
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Downloading file: half_life_3.exe
    Finished downloading file!
    */
    int bad_count = 0;

    //itt írj egy lambda kifejezést, ami meghívja az integrityCheck függvényt és beállítja bad_count változót a visszatérési értékére
    auto integrity_check_lambda = [&bad_count,&file_name]()->void{
            integrityCheck(&bad_count,file_name);
};
    //utána hívd meg egy külön szálon a lambda függvényt
    thread t3(integrity_check_lambda,file_name);
    t3.join();
    cout << "Number of bad data: " << bad_count << endl; // Number of bad data: 144
    return 0;
}
