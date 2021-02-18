#ifndef TEXTPROGRESSOBSERVER_H
#define TEXTPROGRESSOBSERVER_H

#include<iostream>
#include<string>

#include "progressobserver.h"

using namespace std;

class TextProgressObserver : public ProgressObserver
{
public:
    TextProgressObserver();
    virtual void update(int progress, const string &step);
};

#endif // TEXTPROGRESSOBSERVER_H
