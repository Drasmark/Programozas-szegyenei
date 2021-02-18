#ifndef LONGTIMEPRICECALCULATOR_H
#define LONGTIMEPRICECALCULATOR_H

#include "pricecalculatorinterface.h"
#include "longtermcompany.h"

class LongTermPriceCalculator : public PriceCalculatorInterface
{
private:
    LongTermCompany* company;
public:
    LongTermPriceCalculator(LongTermCompany* c);
    virtual ~LongTermPriceCalculator();
    virtual unsigned int getPrice(unsigned int months);
};

#endif // LONGTIMEPRICECALCULATOR_H
