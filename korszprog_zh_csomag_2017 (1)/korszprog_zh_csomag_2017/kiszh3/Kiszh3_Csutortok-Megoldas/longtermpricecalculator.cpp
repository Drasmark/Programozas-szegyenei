#include "longtermpricecalculator.h"

LongTermPriceCalculator::LongTermPriceCalculator(LongTermCompany *c) : company(c)
{

}

LongTermPriceCalculator::~LongTermPriceCalculator()
{
    //delete company;
}

unsigned int LongTermPriceCalculator::getPrice(unsigned int months)
{
    map<unsigned int, unsigned int> prices = company->getPriceMap();
    if(prices.begin()->first > months){
        return months * company->getBasePrice();
    }
    map<unsigned int, unsigned int>::iterator prev;
    for(map<unsigned int, unsigned int>::iterator it = prices.begin(); it != prices.end(); ++it){
        if(it->first > months){
            return prev->second * months;
        }
        prev = it;
    }
    return prev->second * months;

}
