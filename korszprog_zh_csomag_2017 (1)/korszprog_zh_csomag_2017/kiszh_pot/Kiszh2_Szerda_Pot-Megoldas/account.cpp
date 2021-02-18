#include "account.h"

Account::Account(string _accnum) : account_number(_accnum) {}

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
    double transferSum = 0, cardSum = 0;
    for(list<Transaction>::const_iterator it = transactions.cbegin(); it != transactions.cend(); ++it){
        if(it->getType() == "CARD"){
            cardSum += it->getAmount();
        }
        else{
            transferSum += it->getAmount();
        }
        cout << it->getDate() << " " << it->getAmount() << " (" << it->getType() << ")" << endl;
    }
    cout << "Transfer sum: " << transferSum << ", card sum: " << cardSum << endl;
}
