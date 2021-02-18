#include "basicsalarycalculator.h"

int BasicSalaryCalculator::getCompanyRevenue() const
{
    return companyRevenue;
}

BasicSalaryCalculator::BasicSalaryCalculator(int _companyRevenue) : companyRevenue(_companyRevenue)
{

}

long BasicSalaryCalculator::calculateBasicSalary(int salary)
{
    return 12 * salary;
}
