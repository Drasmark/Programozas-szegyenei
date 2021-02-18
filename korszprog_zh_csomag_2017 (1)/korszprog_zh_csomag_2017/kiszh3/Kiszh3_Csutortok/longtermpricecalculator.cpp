#include "longtermpricecalculator.h"

LongTermPriceCalculator::LongTermPriceCalculator(LongTermCompany *c):
	company(c)
{
}

unsigned int LongTermPriceCalculator::getPrice(unsigned int months)
{
	const map<unsigned int, unsigned int> &ltcmap=company->getPriceMap();
	map<unsigned int, unsigned int>::const_iterator min_it=ltcmap.end();
	for (map<unsigned int, unsigned int>::const_iterator it=ltcmap.begin(); it!=ltcmap.end(); ++it)
	{
		if (it->first<=months)
		{
			if (min_it==ltcmap.end() || it->second < min_it->second) min_it=it;
		}
	}
	if (min_it==ltcmap.end())
		return company->getBasePrice() * months;
	else
		return min_it->second * months;
}
