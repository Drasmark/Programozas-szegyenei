#include <iostream>
#include<exception>
#include<string>

//#include "tuple.h"

using namespace std;
//using namespace Util;

int main()
{
    //a print() metódus kimenete változhat, attól függően, hogy írtad meg!

    /*Tuple<string, int> t1("lali", 10);
    t1.print(); //[Key: lali -> Value: 10]
    cout << endl;
    Tuple<string, int> t2("maki", 5);
    t2.print(); //[Key: maki -> Value: 5]
    cout << endl;

    Tuple<string, int>* tuples = new Tuple<string, int>[4];
    tuples[0] = Tuple<string, int>("sanya", 15);
    tuples[1] = Tuple<string, int>("lali", 10);
    tuples[2] = Tuple<string, int>("sanya", 15);
    tuples[3] = Tuple<string, int>("lali", 20);*/

    //Az alábbi kódrészletben kezeld az esetleges kivételeket úgy, hogy minden összehasonlítás végrehajtódjon.
    /*for(int i = 0; i < 3; ++i){
        for(int j = i + 1; j < 4; ++j){
            Tuple<string, int> a = tuples[i];
            Tuple<string, int> b = tuples[j];
            a.print();
            cout << " | ";
            b.print();
            cout << " -> ";
			//itt kezeld a függvény által dobott esetleges kivételt
            cout << a.compare(b) << endl;
        }
    }*/

    //Példa kimenet:
    //[Key: sanya -> Value: 15] | [Key: lali -> Value: 10] -> 1
    //[Key: sanya -> Value: 15] | [Key: sanya -> Value: 15] -> A parok egyenloek!
    //[Key: sanya -> Value: 15] | [Key: lali -> Value: 20] -> 1
    //[Key: lali -> Value: 10] | [Key: sanya -> Value: 15] -> -1
    //[Key: lali -> Value: 10] | [Key: lali -> Value: 20] -> -1
    //[Key: sanya -> Value: 15] | [Key: lali -> Value: 20] -> 1
	
	delete[] tuples;

    return 0;
}
