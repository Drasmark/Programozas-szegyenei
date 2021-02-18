#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<list>
#include<string>
#include<fstream>
#include<iostream>

#include "transaction.h"

using namespace std;

class Account
{
private:
    string account_number;
    list<Transaction> transactions;
public:
    Account(string _accnum);
    void readTransactions(string file_name);
    void sortTransactions();
    void printTransactions();
};

#endif // ACCOUNT_H
