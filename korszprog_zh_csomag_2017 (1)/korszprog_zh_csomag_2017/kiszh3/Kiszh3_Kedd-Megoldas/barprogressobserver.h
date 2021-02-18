#ifndef BARPROGRESSOBSERVER_H
#define BARPROGRESSOBSERVER_H

#include<iostream>
#include<string>

#include "progressobserver.h"

using namespace std;

class BarProgressObserver : public ProgressObserver
{
private:
    //int progress_count;
public:
    BarProgressObserver();
    virtual void update(int progress, const string &step);
};

#endif // BARPROGRESSOBSERVER_H
