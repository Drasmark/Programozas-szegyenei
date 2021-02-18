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

int integrityCheck(){
    int bad = 0;
    for(auto data_vector : _data){
        for(auto d : data_vector){
            if(rand() % 100 < 3) bad++;
        }
    }
    return bad;
}

void progress_check(mutex* m, string file_name){
    while(1){
        if(m->try_lock()){
           cout << "Finished downloading file!" << endl;
           m->unlock();
           break;
        }
        this_thread::sleep_for(chrono::milliseconds(500));
        cout << "Downloading file: " << file_name << endl;
    }
}

int main()
{
    mutex m;
    const string& file_name = "half_life_3.exe";
    thread dl(download, file_name, &m);
    thread check(progress_check, &m, file_name);
    dl.join();
    check.join();
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
    auto integrity_check_lambda = [&bad_count]() -> void {bad_count = integrityCheck();};
    thread bad(integrity_check_lambda);
    bad.join();
    cout << "Number of bad data: " << bad_count << endl; // Number of bad data: 144
    return 0;
}
