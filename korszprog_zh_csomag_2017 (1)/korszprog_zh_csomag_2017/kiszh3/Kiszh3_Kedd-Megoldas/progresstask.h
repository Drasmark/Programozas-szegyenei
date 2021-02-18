#ifndef PROGRESSTASK_H
#define PROGRESSTASK_H

#include<list>
#include<vector>
#include<string>
#include<random>
#include<functional>
#include<thread>
#include<chrono>
#include<cmath>
#include<iostream>

#include "progressobserver.h"

using namespace std;

class ProgressTask
{
private:
    string name;
    list<ProgressObserver*> observers;
    void notifyObservers(int progress, const string& task);
public:
    ProgressTask(const string& _name);
    void addObserver(ProgressObserver* observer);
    void doTask(const vector<string>& steps);
};

#endif // PROGRESSTASK_H
