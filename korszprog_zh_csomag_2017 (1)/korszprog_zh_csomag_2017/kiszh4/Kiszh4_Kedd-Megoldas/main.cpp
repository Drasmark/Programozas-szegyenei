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

int checkSolutions(list<Coefficients>& coefficients, mutex* m){
    int no_solution_count = 0, checked_count = 0;
    for(list<Coefficients>::iterator it = coefficients.begin(); it != coefficients.end(); ++it){
        this_thread::sleep_for(chrono::milliseconds(1));
        if(!it->solvable()){
            no_solution_count++;
        }
        checked_count++;
        m->lock();
        cout << checked_count << " db egyenlet ellenorizve." << endl;
        m->unlock();
    }
    return no_solution_count;
}

void printCoefficients(list<Coefficients>& coefficients, mutex* m){
    for(auto coeff : coefficients){
        this_thread::sleep_for(chrono::milliseconds(1));
        m->lock();
        coeff.print();
        m->unlock();
    }
}

int main()
{
    mutex m;
    list<Coefficients> coefficients;
    generateData(coefficients);
    int no_solution_count = 0;

    auto solution_checker = [&no_solution_count, &m](list<Coefficients>& coefficients) -> void {
        no_solution_count = checkSolutions(coefficients, &m);};
    thread t1(solution_checker, coefficients);
    thread t2(printCoefficients, coefficients, &m);
    t1.join();
    t2.join();

    cout << no_solution_count << " egyenletnek nem letezik megoldasa." << endl;
    return 0;
}
