#include "executivesalarycalculatoradapter.h"

ExecutiveSalaryCalculatorAdapter::ExecutiveSalaryCalculatorAdapter(BasicSalaryCalculator *bc) : SalaryCalculatorInterface(bc)
{

}

long ExecutiveSalaryCalculatorAdapter::calculateSalary(Employee& employee)
{
    long base_salary = basicCalculator->calculateBasicSalary(employee.getSalary());
    long salary = base_salary + basicCalculator->getCompanyRevenue() * (employee.getShare() / 100.0);
    return salary;
}
