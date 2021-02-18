#include "managersalarycalculatoradapter.h"

ManagerSalaryCalculatorAdapter::ManagerSalaryCalculatorAdapter(BasicSalaryCalculator *bc) : SalaryCalculatorInterface(bc)
{

}

long ManagerSalaryCalculatorAdapter::calculateSalary(Employee &employee)
{
    long base_salary = basicCalculator->calculateBasicSalary(employee.getSalary());
    long salary = base_salary + (employee.getPerformance() >= 70 ? employee.getBonus() : 0);
    return salary;
}
