#include "company.h"

Company::Company(const string &_name, int _revenue) : name(_name), revenue(_revenue), bc(new BasicSalaryCalculator(_revenue))
{
    ExecutiveSalaryCalculatorAdapter* exec_adapter = new ExecutiveSalaryCalculatorAdapter(bc);
    WorkerSalaryCalculatorAdapter* worker_adapter = new WorkerSalaryCalculatorAdapter(bc);
    ManagerSalaryCalculatorAdapter* manager_adapter = new ManagerSalaryCalculatorAdapter(bc);
    calculators.insert(pair<string, SalaryCalculatorInterface*>("MANAGEMENT", exec_adapter));
    calculators["WORKERS"] = worker_adapter;
    calculators["SUPERVISORS"] = manager_adapter;
}

Company::~Company()
{
    for(auto kv : calculators){
        delete kv.second;
    }
    delete bc;
}

void Company::readEmployees(const string &file_name)
{
    ifstream input(file_name);
    if(input.is_open()){
        list<int> invalid_ids;
        while(input.good()){
            int id, salary;
            string first_name, last_name, division;
            input >> id >> first_name >> last_name >> division >> salary;
            int share = 0;
            int tax_benefit = 0;
            int performance = 0;
            int bonus = 0;
            if(division == "WORKERS" || division == "MANAGEMENT" || division == "SUPERVISORS"){
                if(division == "WORKERS"){
                    input >> tax_benefit;
                }
                else if(division == "MANAGEMENT"){
                    input >> share;
                }
                else if(division == "SUPERVISORS"){
                    input >> performance >> bonus;
                }
                Employee e(id, first_name + last_name, division, salary, share, performance, bonus, tax_benefit);
                employees.push_back(e);
            }
            else{
                //cout << "Nem kezelt divizio: " << division << endl;
                invalid_ids.push_back(id);
            }
        }
        //cout << employees.size() << endl;
        input.close();
        if(invalid_ids.size() > 0) throw invalid_division_exception(invalid_ids);
    }
    else{
        cout << "Hiba a fajl megnyitasa kozben!" << endl;
    }
}

void Company::calculateSalaries()
{
    //list<Employee> workers, executives, managers;
    list<list<Employee>::iterator> workers, executives, managers;
    for(auto it = employees.begin(); it != employees.end(); ++it){
        if(it->getDivision() == "WORKERS"){
            workers.push_back(it);
            //workers.push_back(*it);
        }
        else if(it->getDivision() == "MANAGEMENT"){
            executives.push_back(it);
            //executives.push_back(*it);
        }
        else if(it->getDivision() == "SUPERVISORS"){
            managers.push_back(it);
            //managers.push_back(*it);
        }
    }
    mutex m;
    auto calculator = [&m](list<list<Employee>::iterator> employees, SalaryCalculatorInterface* calculator) -> void {
        for(auto e : employees){
            m.lock();
            cout << "Employee id: " << e->getId() << " - annual salary: " << calculator->calculateSalary(*e) << endl;
            m.unlock();
            this_thread::sleep_for(chrono::milliseconds(100));
        }
    };
    thread calc1(calculator, workers, calculators["WORKERS"]);
    thread calc2(calculator, executives, calculators["MANAGEMENT"]);
    thread calc3(calculator, managers, calculators["SUPERVISORS"]);
    calc1.join();
    calc2.join();
    calc3.join();
}
