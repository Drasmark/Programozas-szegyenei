#include "account.h"

Account::Account(string _accnum, double _balance) : account_number(_accnum), balance(_balance) {}

void Account::readTransactions(string file_name)
{
    ifstream input(file_name);
    if(input.is_open()){
        string date;
        input >> date;
        while(date != "*"){
            string type;
            double amount;
            input >> type >> amount;
            transactions.push_back(Transaction(type, amount, date));
            input >> date;
        }
        input.close();
    }
}

void Account::sortTransactions()
{
    transactions.sort();
}

void Account::printTransactions()
{
    double balance = this->balance;
    for(list<Transaction>::const_iterator it = transactions.cbegin(); it != transactions.cend(); ++it){
        if(it->getType() == "C"){
            balance += it->getAmount();
            cout << it->getDate() << " +" << it->getAmount() << endl;
        }
        else{
            balance -= it->getAmount();
            cout << it->getDate() << " -" << it->getAmount() << endl;
        }
    }
    cout << "Balance: " << balance << endl;
}
