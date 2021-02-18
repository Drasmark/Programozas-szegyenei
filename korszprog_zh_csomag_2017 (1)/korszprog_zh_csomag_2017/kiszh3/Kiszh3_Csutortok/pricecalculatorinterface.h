#ifndef PRICECALCULATORINTERFACE_H
#define PRICECALCULATORINTERFACE_H

class PriceCalculatorInterface
{
public:
	virtual ~PriceCalculatorInterface();
	virtual unsigned int getPrice(unsigned int months) = 0;
};

#endif // PRICECALCULATORINTERFACE_H
