#include "workersalarycalculatoradapter.h"


WorkerSalaryCalculatorAdapter::WorkerSalaryCalculatorAdapter(BasicSalaryCalculator *bc) : SalaryCalculatorInterface(bc)
{

}

long WorkerSalaryCalculatorAdapter::calculateSalary(Employee &employee)
{
    long base_salary = basicCalculator->calculateBasicSalary(employee.getSalary());
    long salary = (1 + employee.getTaxBenefit() / 100.0) * base_salary;
    return salary;
}
