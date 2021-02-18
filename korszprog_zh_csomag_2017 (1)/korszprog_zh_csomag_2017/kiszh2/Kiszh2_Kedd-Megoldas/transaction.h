#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<string>

using namespace std;

class Transaction
{
private:
    string type; //C - jóváírás (credit), D - terhelés (debit)
    double amount; //összeg
    string date; //dátum - pl.: 2017.10.10.
public:
    Transaction(string _type, double _amount, string _date);
    const string& getType() const;
    const double getAmount() const;
    const string& getDate() const;
    //operátor felülírása rendezéshez
    bool operator<(const Transaction& t) const;
};

#endif // TRANSACTION_H
