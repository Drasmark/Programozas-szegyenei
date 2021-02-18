#ifndef SHORTTERMPRICECALCULATOR_H
#define SHORTTERMPRICECALCULATOR_H

#include "shorttermcompany.h"
#include "pricecalculatorinterface.h"

class ShortTermPriceCalculator : public PriceCalculatorInterface
{
	ShortTermCompany * company;
public:
	ShortTermPriceCalculator(ShortTermCompany *c);
	virtual unsigned int getPrice(unsigned int months);
};

#endif // SHORTTERMPRICECALCULATOR_H
