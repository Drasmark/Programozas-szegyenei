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
    id: 1009 - name: villa - quantity: 85
    id: 1008 - name: kes - quantity: 85
    id: 1007 - name: sampon - quantity: 18
    id: 1006 - name: tusfurdo - quantity: 22
    id: 1005 - name: kenyer - quantity: 35
    id: 1004 - name: tej - quantity: 50
    id: 1003 - name: laptop - quantity: 21
    id: 1002 - name: pc - quantity: 15
    id: 1001 - name: motor - quantity: 3
    id: 1000 - name: auto - quantity: 5
    */

    //termékek eladhatóságának ellenőrzése
    cout << endl << "Sells:" << endl;
    store.sellItem(2000, 10);
    store.sellItem(1005, 8);
    store.sellItem(1002, 100);
    /*
    Sells:
    No item found with id 2000
    Selling 8 item(s) with id 1005
    Not enough item(s) to sell with id: 1002!
    */

    return 0;
}
