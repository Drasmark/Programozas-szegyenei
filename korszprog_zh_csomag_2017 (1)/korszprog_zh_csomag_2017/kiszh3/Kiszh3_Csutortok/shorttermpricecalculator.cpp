#include "shorttermpricecalculator.h"

ShortTermPriceCalculator::ShortTermPriceCalculator(ShortTermCompany *c):
	company(c)
{
}

unsigned int ShortTermPriceCalculator::getPrice(unsigned int months)
{
	unsigned int mper3=months/3;
	unsigned int cost=mper3*company->getThreeMonthsPrice();
	if (months%3==1) cost+=company->getOneMonthPrice();
	else if (months%3==2) cost+=company->getTwoMonthsPrice();
	return cost;
}
