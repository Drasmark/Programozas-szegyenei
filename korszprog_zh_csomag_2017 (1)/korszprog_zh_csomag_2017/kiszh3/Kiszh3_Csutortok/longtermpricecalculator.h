#ifndef LONGTERMPRICECALCULATOR_H
#define LONGTERMPRICECALCULATOR_H

#include "longtermcompany.h"
#include "pricecalculatorinterface.h"

class LongTermPriceCalculator : public PriceCalculatorInterface
{
	LongTermCompany *company;
public:
	LongTermPriceCalculator(LongTermCompany *c);
	virtual unsigned int getPrice(unsigned int months);
};

#endif // LONGTERMPRICECALCULATOR_H
