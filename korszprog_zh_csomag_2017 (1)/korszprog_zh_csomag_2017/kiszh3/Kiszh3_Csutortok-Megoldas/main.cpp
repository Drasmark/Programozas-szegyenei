#include <iostream>
#include <list>
#include "longtermcompany.h"
#include "shorttermcompany.h"
#include "pricecalculatorinterface.h"
#include "longtermpricecalculator.h"
#include "shorttermpricecalculator.h"

using namespace std;

PriceCalculatorInterface* cheapest(list<PriceCalculatorInterface*> calculators, unsigned int months){
    PriceCalculatorInterface* min = calculators.front();
    for(list<PriceCalculatorInterface*>::iterator it = calculators.begin(); it != calculators.end(); ++it){
        if((*it)->getPrice(months) < min->getPrice(months)){
            min = *it;
        }
    }
    return min;
}

int main()
{
	// LongTermCompany
	cout << endl << endl;
	LongTermCompany ltc1(56); // Az alapár 56 egység per hónap
	ltc1.addPriceLevel(3, 50); // Ha legalább 3 hónapos a szerződés, akkor 50 egység per hónap
	ltc1.addPriceLevel(7, 40); // Ha legalább 7 hónapos a szerződés, akkor 40 egység per hónap
	ltc1.addPriceLevel(10, 35); // Ha legalább 10 hónapos a szerződés, akkor 35 egység per hónap
	ltc1.addPriceLevel(15, 32); // Ha legalább 15 hónapos a szerződés, akkor 32 egység per hónap

	{
		cout << "Base price: " << ltc1.getBasePrice() << endl; // Base price: 56
		const map<unsigned int, unsigned int> &ltcmap=ltc1.getPriceMap();
		for (map<unsigned int, unsigned int>::const_iterator it=ltcmap.begin(); it!=ltcmap.end(); ++it)
		{
			cout << "If at least " << it->first << " months, price is " << it->second << endl;
		}
		// If at least 3 months, price is 50
		// If at least 7 months, price is 40
		// If at least 10 months, price is 35
		// If at least 15 months, price is 32
	}

	// ShortTermCompany
	cout << endl << endl;
	ShortTermCompany stc1(65, 120, 150); // Egy hónapra 65, két hónapra 120 (összesen, vagyis havi 60), három hónapra 150 (összesen, vagyis havi 50)
	cout << "One months: " << stc1.getOneMonthPrice() << endl; // One month: 65
	cout << "Two months: " << stc1.getTwoMonthsPrice() << endl; // Two months: 120
	cout << "Three months: " << stc1.getThreeMonthsPrice() << endl; // Three months: 150

    // LongTermPriceCalculator
    cout << endl << endl;
    PriceCalculatorInterface *calculator1=new LongTermPriceCalculator(&ltc1);
    cout << calculator1->getPrice(2) << endl; // 112
    cout << calculator1->getPrice(3) << endl; // 150
    cout << calculator1->getPrice(10) << endl; // 350
    cout << calculator1->getPrice(20) << endl; // 640
    // Indoklások: a legelső kedvezmény 3 hónaptól van, így 2 hónapra az ár 56 per hónap. 3-ra már 50 per hónap.
    // 10 hónapra már pont 35 per hónap. 20 hónapra pedig 32 per hónap (több mint 15).

    // ShortTermPriceCalculator
    cout << endl << endl;
    PriceCalculatorInterface *calculator2=new ShortTermPriceCalculator(&stc1);
    cout << calculator2->getPrice(2) << endl; // 120
    cout << calculator2->getPrice(3) << endl; // 150
    cout << calculator2->getPrice(10) << endl; // 515
    cout << calculator2->getPrice(20) << endl; // 1020
    // Indoklások: 2 hónapra a 2 hónapos ár érvényes (120), 3 hónapra a 3 hónapos (150).
    // 10 hónap az 3*3+1, vagyis az ár 3*150+65. 20 hónap az 6*3+2, vagyis az ár 6*150+120.

    // Two more companies for the last part, and calling the cheapest function
    cout << endl << endl;
    LongTermCompany ltc2(70);
    ltc2.addPriceLevel(6, 39);
    ltc2.addPriceLevel(13, 30);
    ShortTermCompany stc2(60, 110, 140);
    PriceCalculatorInterface *calculator3=new LongTermPriceCalculator(&ltc2);
    PriceCalculatorInterface *calculator4=new ShortTermPriceCalculator(&stc2);

    list<PriceCalculatorInterface*> calc_list;
    calc_list.push_back(calculator1);
    calc_list.push_back(calculator2);
    calc_list.push_back(calculator3);
    calc_list.push_back(calculator4);

    PriceCalculatorInterface *tmp=0;
    tmp=cheapest(calc_list, 1);
    cout << tmp->getPrice(1) << endl; // 56
    tmp=cheapest(calc_list, 2);
    cout << tmp->getPrice(2) << endl; // 110
    tmp=cheapest(calc_list, 3);
    cout << tmp->getPrice(3) << endl; // 140
    tmp=cheapest(calc_list, 7);
    cout << tmp->getPrice(7) << endl; // 273
    tmp=cheapest(calc_list, 10);
    cout << tmp->getPrice(10) << endl; // 350
    tmp=cheapest(calc_list, 25);
    cout << tmp->getPrice(25) << endl; // 750

    delete calculator1;
    delete calculator2;
    delete calculator3;
    delete calculator4;

	return 0;
}
