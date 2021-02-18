#include "shorttermcompany.h"

ShortTermCompany::ShortTermCompany(unsigned int one, unsigned int two, unsigned int three):
	one_month(one),
	two_months(two),
	three_months(three)
{
}

unsigned int ShortTermCompany::getOneMonthPrice() const
{
	return one_month;
}

unsigned int ShortTermCompany::getTwoMonthsPrice() const
{
	return two_months;
}

unsigned int ShortTermCompany::getThreeMonthsPrice() const
{
	return three_months;
}
