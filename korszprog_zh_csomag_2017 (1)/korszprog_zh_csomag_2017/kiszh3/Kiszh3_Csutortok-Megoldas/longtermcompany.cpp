#include "longtermcompany.h"

LongTermCompany::LongTermCompany(unsigned int base):
	base_price(base)
{
}

void LongTermCompany::addPriceLevel(unsigned int months, unsigned int monthly_price)
{
	prices[months]=monthly_price;
}

unsigned int LongTermCompany::getBasePrice() const
{
	return base_price;
}

const map<unsigned int, unsigned int> &LongTermCompany::getPriceMap() const
{
	return prices;
}
