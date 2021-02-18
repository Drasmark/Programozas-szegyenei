#ifndef BASICSALARYCALCULATOR_H
#define BASICSALARYCALCULATOR_H

class BasicSalaryCalculator
{
private:
    int companyRevenue;
public:
    BasicSalaryCalculator(int _companyRevenue);
    long calculateBasicSalary(int salary);
    int getCompanyRevenue() const;
};

#endif // BASICSALARYCALCULATOR_H
