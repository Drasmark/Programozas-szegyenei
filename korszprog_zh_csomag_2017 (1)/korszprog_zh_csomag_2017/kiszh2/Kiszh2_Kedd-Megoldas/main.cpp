#include <iostream>

#include "account.h"

using namespace std;

int main()
{
    Account acc("73200206-56871132", 10000);

    //tranzakciók beolvasása fájlból, ha nem megy, manuálisan hozz létre Transaction objektumokat a függvényen belül
    acc.readTransactions("transactions.txt");

    //tranzakciók kiiratása a beolvasás sorrendjében
    cout << "Transactions:" << endl;
    acc.printTransactions();
    /*
    Transactions:
    2017.10.05. +250000
    2017.10.27. -5000
    2017.10.18. -3000
    2017.10.10. -9000
    2017.10.15. -7000
    2017.10.01. +30000
    2017.10.07. -21000
    2017.10.30. -500
    2017.10.22. +8000
    2017.10.25. -5000
    Balance: 247500
    */

    //tranzakciók rendezése
    acc.sortTransactions();

    //tranzakciók kiiratása dátum szerint növekvő sorrendben
    cout << endl << "Transactions (sorted):" << endl;
    acc.printTransactions();
    /*
    Transactions (sorted):
    2017.10.01. +30000
    2017.10.05. +250000
    2017.10.07. -21000
    2017.10.10. -9000
    2017.10.15. -7000
    2017.10.18. -3000
    2017.10.22. +8000
    2017.10.25. -5000
    2017.10.27. -5000
    2017.10.30. -500
    Balance: 247500
    */

    return 0;
}
