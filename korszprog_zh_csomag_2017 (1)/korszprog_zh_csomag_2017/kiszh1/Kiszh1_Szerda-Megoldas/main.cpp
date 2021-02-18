#include <iostream>
#include<exception>
#include<string>

#include "tuple.h"

using namespace std;
using namespace Util;

int main()
{

    Tuple<string, int> t1("lali", 10);
    t1.print();
    cout << endl;
    Tuple<string, int> t2("maki", 5);
    t2.print();
    cout << endl;

    Tuple<string, int>* tuples = new Tuple<string, int>[4];
    tuples[0] = Tuple<string, int>("sanya", 15);
    tuples[1] = Tuple<string, int>("lali", 10);
    tuples[2] = Tuple<string, int>("sanya", 15);
    tuples[3] = Tuple<string, int>("lali", 20);

    //Az alábbi ciklusnál kezeld az esetleges kivételeket úgy, hogy minden összehasonlítás végrehajtódjon.
    for(int i = 0; i < 3; ++i){
        for(int j = i + 1; j < 4; ++j){
            Tuple<string, int> a = tuples[i];
            Tuple<string, int> b = tuples[j];
            a.print();
            cout << " | ";
            b.print();
            cout << " -> ";
            try{
                cout << a.compare(b) << endl;
            }
            catch(exception& ex){
                cout << ex.what() << endl;
            }
        }
    }
	
	delete[] tuples;

    return 0;
}
