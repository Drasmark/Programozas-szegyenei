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

int main()
{
    list<Pair> pairs;
    generateData(pairs);
    int negative_count = 0;


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


    cout << negative_count << " db szamparnak negativ a kulonbsege." << endl; //260 db szamparnak negativ a kulonbsege.
    return 0;
}
