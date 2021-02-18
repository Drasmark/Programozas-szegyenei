#ifndef COMPANY_H
#define COMPANY_H

#include<string>
#include<list>
#include<iostream>
#include<fstream>
#include<exception>
#include<iostream>
#include<sstream>
#include<map>
#include<mutex>
#include<thread>
#include<chrono>

#include "employee.h"
//#include "managersalarycalculatoradapter.h"
//#include "supervisorsalarycalculatoradapter.h"
//#include "workersalarycalculatoradapter.h"
#include "basicsalarycalculator.h"


using namespace std;

class Company
{
private:

    string name;
    int revenue;
    BasicSalaryCalculator* bc;

public:
    Company(const string& _name, int _revenue);
    ~Company();

};

#endif // COMPANY_H
