#ifndef ENGINEOBSERVER_H
#define ENGINEOBSERVER_H

#include<iostream>

using namespace std;

class engineobserver
{
public:
    engineobserver();
    virtual void update(int rpm) = 0;
};

#endif // ENGINEOBSERVER_H
