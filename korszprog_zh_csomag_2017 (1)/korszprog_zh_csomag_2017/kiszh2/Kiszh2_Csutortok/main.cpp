#include <iostream>
#include "point.h"
#include "manypoints.h"

using namespace std;

int main()
{
    ManyPoints mp;

    mp.readFromFile("ertekek.txt");

    mp.print();
////	3.4 5.6 7.8
////	1 2 3
////	4.3 6.5 2.1

////	54.65
////	76.8
////	87
////	7.6

    mp.print(false);
////	3.4 5.6 7.8
////	1 2 3
////	4.3 6.5 2.1

////	54.65
////	76.8
////	87
////	7.6

    mp.print(true);
////	4.3 6.5 2.1
////	1 2 3
////	3.4 5.6 7.8

////	7.6
////	87
////	76.8
////	54.65


	return 0;
}
