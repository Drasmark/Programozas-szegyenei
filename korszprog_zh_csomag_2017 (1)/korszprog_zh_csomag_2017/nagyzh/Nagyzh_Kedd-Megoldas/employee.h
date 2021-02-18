#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>

using namespace std;

namespace employee {

class Employee
{
private:
    int id;
    string name;
    string division;
    int salary;

    int share;

    int performance;
    int bonus;

    int taxBenefit;
public:
    Employee(int _id, const string& _name, const string& _division, int _salary, int _share, int _performance, int _bonus, int _taxBenefit);
    int getId() const;
    string getName() const;
    string getDivision() const;
    int getSalary() const;
    int getShare() const;
    int getPerformance() const;
    int getBonus() const;
    int getTaxBenefit() const;
};

}

#endif // EMPLOYEE_H
