#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <list>

#include "pair.h"

using namespace std;

void generateData(list<Pair>& pairs){
    srand(time(0));
    for(int i = 0; i < 500; ++i){
        pairs.push_back(Pair(rand() % 100 - 50, rand() % 100 - 50));
    }
}

void count(list<Pair> pairs, mutex* m, int* count){
    int negative_count = 0, checked_count = 0;
    for(auto pair : pairs){
        this_thread::sleep_for(chrono::milliseconds(1));
        if(!pair.negative()){
            negative_count++;
        }
        checked_count++;
        m->lock();
        cout << checked_count << " db szampar ellenorizve." << endl;
        m->unlock();
    }
    *count = negative_count;
}

void printPairs(list<Pair> pairs, mutex* m){
    for(auto pair : pairs){
        this_thread::sleep_for(chrono::milliseconds(1));
        m->lock();
        pair.print();
        m->unlock();
    }
}

int main()
{
    mutex m;
    list<Pair> pairs;
    generateData(pairs);
    int negative_count = 0;

    auto checker = [&negative_count, &m](list<Pair>& pairs) -> void { count(pairs, &m, &negative_count);};
    thread t1(checker, pairs);
    thread t2(printPairs, pairs, &m);
    /*
    a: 6, b: -47
    1 db szampar ellenorizve.
    a: -35, b: -14
    2 db szampar ellenorizve.
    a: -3, b: -15
    3 db szampar ellenorizve.
    a: -23, b: 6
    4 db szampar ellenorizve.
    a: 15, b: 44
    5 db szampar ellenorizve.
    a: -22, b: -35
    6 db szampar ellenorizve.

    ...

    498 db szampar ellenorizve.
    499 db szampar ellenorizve.
    500 db szampar ellenorizve.
    */
    t1.join();
    t2.join();

    cout << negative_count << " db szamparnak negativ a kulonbsege." << endl; //260 db szamparnak negativ a kulonbsege.
    return 0;
}
