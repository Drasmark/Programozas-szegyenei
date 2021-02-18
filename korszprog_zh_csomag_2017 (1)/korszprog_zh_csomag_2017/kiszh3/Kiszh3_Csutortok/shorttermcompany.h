#ifndef SHORTTERMCOMPANY_H
#define SHORTTERMCOMPANY_H

class ShortTermCompany
{
	unsigned int one_month, two_months, three_months;
public:
	ShortTermCompany(unsigned int one, unsigned int two, unsigned int three);
	unsigned int getOneMonthPrice() const;
	unsigned int getTwoMonthsPrice() const;
	unsigned int getThreeMonthsPrice() const;
};

#endif // SHORTTERMCOMPANY_H
