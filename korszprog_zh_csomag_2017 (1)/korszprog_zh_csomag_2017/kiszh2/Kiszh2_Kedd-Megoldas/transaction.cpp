#include "transaction.h"

Transaction::Transaction(string _type, double _amount, string _date) : type(_type), amount(_amount), date(_date) {}

const string &Transaction::getType() const
{
    return this->type;
}

const double Transaction::getAmount() const
{
    return this->amount;
}

const string &Transaction::getDate() const
{
    return this->date;
}

bool Transaction::operator<(const Transaction &t) const
{
    return date < t.getDate();
}
