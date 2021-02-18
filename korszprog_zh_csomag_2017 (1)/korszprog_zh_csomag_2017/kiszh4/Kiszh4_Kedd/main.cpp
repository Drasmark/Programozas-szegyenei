#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <list>

#include "coefficients.h"

using namespace std;

void generateData(list<Coefficients>& coefficients){
    srand(time(0));
    for(int i = 0; i < 500; ++i){
        coefficients.push_back(Coefficients(rand() % 100, rand() % 100, rand() % 100));
    }
}

int checkSolutions(list<Coefficients>& coefficients,mutex* mtx){
    int no_solution_count = 0, checked_count = 0;
    for(list<Coefficients>::iterator it = coefficients.begin(); it != coefficients.end(); ++it){
        this_thread::sleep_for(chrono::milliseconds(1));
        if(!it->solvable()){
            no_solution_count++;
        }
        checked_count++;
        mtx->lock();
        cout << checked_count << " db egyenlet ellenorizve." << endl;
        mtx->unlock();
    }
    return no_solution_count;
}

//itt írd meg a printCoefficients függvényt
void printCoefficients(list<Coefficients>& lista, mutex* mtx){
    for(auto coe : lista){
        this_thread::sleep_for(chrono::milliseconds(1));
        mtx->lock();
        coe.print();
        mtx->unlock();
    }

}
int main()
{
    //együtthatókat tartalmazó lista
    list<Coefficients> coefficients;
    //lista feltöltése véletlenszerű értékekkel
    generateData(coefficients);
    int no_solution_count = 0;
    mutex mtx;
    //írd meg a solution_checker lambda függvényt
    auto solution_checker = [&no_solution_count,&mtx](list<Coefficients>& egyuthatok)-> void{
            no_solution_count = checkSolutions(egyuthatok,&mtx);
        };
    //indítsd el két külön szálon a solution_checker-t és a printCoefficients-t

    thread t1(solution_checker,coefficients);
    thread t2(printCoefficients,coefficients,&mtx);
    //a fő szál várja be a két szált
    t1.join();
    t2.join();
    cout << no_solution_count << " egyenletnek nem letezik megoldasa." << endl;

    /*
    1 db egyenlet ellenorizve.
    a: 49 b: 83 c: 74
    a: 45 b: 4 c: 13
    2 db egyenlet ellenorizve.
    3 db egyenlet ellenorizve.
    a: 26 b: 69 c: 22
    a: 64 b: 61 c: 95
    4 db egyenlet ellenorizve.
    5 db egyenlet ellenorizve.
    a: 21 b: 60 c: 15
    6 db egyenlet ellenorizve.
    a: 10 b: 33 c: 34
    a: 41 b: 29 c: 99
    7 db egyenlet ellenorizve.
    8 db egyenlet ellenorizve.
    a: 10 b: 78 c: 48
    9 db egyenlet ellenorizve.
    a: 10 b: 84 c: 66
    10 db egyenlet ellenorizve.
    a: 63 b: 73 c: 56
    a: 89 b: 65 c: 57
    ...
    ...
    ...
    358 egyenletnek nem letezik megoldasa.
    */
    return 0;
}
