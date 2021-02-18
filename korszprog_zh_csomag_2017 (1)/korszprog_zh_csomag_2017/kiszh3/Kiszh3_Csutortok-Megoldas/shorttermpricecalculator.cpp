#include "shorttermpricecalculator.h"

ShortTermPriceCalculator::ShortTermPriceCalculator(ShortTermCompany *c) : company(c)
{

}

ShortTermPriceCalculator::~ShortTermPriceCalculator()
{
    //delete company;
}

unsigned int ShortTermPriceCalculator::getPrice(unsigned int months)
{
    switch(months){
    case 1:
        return company->getOneMonthPrice();
    case 2:
        return company->getTwoMonthsPrice();
    case 3:
        return company->getThreeMonthsPrice();
    default:
        return company->getThreeMonthsPrice() * (months / 3) + (months % 3 == 1 ? company->getOneMonthPrice() : company->getTwoMonthsPrice());
    }
}
