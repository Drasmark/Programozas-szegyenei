#ifndef LONGTERMCOMPANY_H
#define LONGTERMCOMPANY_H

#include <map>

using namespace std;

class LongTermCompany
{
	unsigned int base_price;
	map<unsigned int, unsigned int> prices;
public:
	LongTermCompany(unsigned int base);
	void addPriceLevel(unsigned int months, unsigned int monthly_price);
	unsigned int getBasePrice() const;
	const map<unsigned int, unsigned int> &getPriceMap() const;
};

#endif // LONGTERMCOMPANY_H
