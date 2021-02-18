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
#include "managersalarycalculatoradapter.h"
#include "executivesalarycalculatoradapter.h"
#include "workersalarycalculatoradapter.h"
#include "basicsalarycalculator.h"

using namespace employee;
using namespace std;

class Company
{
private:
    class invalid_division_exception : public exception {
    private:
        string msg;
    public:
        invalid_division_exception(list<int> ids){
            stringstream ss;
            for(auto id : ids){
                ss << id << " ";
            }
            this->msg = "invalid division row ids: " + ss.str();
        }
        ~invalid_division_exception(){}
        virtual const char* what() const noexcept {
            return this->msg.c_str();
        }
    };
    string name;
    int revenue;
    BasicSalaryCalculator* bc;
    list<Employee> employees;
    map<string, SalaryCalculatorInterface*> calculators;
public:
    Company(const string& _name, int _revenue);
    ~Company();
    void readEmployees(const string& file_name);
    void calculateSalaries();
};

#endif // COMPANY_H
