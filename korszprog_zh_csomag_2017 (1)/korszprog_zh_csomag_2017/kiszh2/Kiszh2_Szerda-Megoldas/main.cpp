#include <iostream>
#include<map>

#include "store.h"

using namespace std;

int main()
{
    Store store("Store Inc.");

    //termékek beolvasása fájlból, ha nem megy, akkor manuálisan töltsd fel a tárolót
    store.readItems("items.txt");

    //termékek kiiratása név szerint sorrendben
    cout << "Items (ordered):" << endl;
    store.printItems();
    /*
    Items (ordered):
    auto - quantity: 5
    kenyer - quantity: 35
    kes - quantity: 85
    laptop - quantity: 21
    motor - quantity: 3
    pc - quantity: 15
    sampon - quantity: 18
    tej - quantity: 50
    tusfurdo - quantity: 22
    villa - quantity: 85
    */

    //termékek eladhatóságának ellenőrzése
    cout << endl << "Sells:" << endl;
    store.sellItem("alma", 10);
    store.sellItem("pc", 8);
    store.sellItem("tusfurdo", 100);
    /*
    Sells:
    No item found with name alma
    Selling 8 pc
    Not enough tusfurdo to sell!
    */

    return 0;
}
