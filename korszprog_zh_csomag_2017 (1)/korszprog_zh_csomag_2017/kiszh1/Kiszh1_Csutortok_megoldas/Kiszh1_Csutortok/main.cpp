#include <iostream>
#include <string>
#include "triplet.h"

using namespace std;

using namespace ZH;

namespace ZH
{

template <class T>
void compare(const Triplet<T> &t1, const Triplet<T> &t2)
{
	try
	{
		T b1=t1.biggest();
		T b2=t2.biggest();
		if (b1>b2) cout << "Az elso a nagyobb" << endl;
		else if (b1<b2) cout << "A masodik a nagyobb" << endl;
		else cout << "ERROR" << endl;
	}
	catch(...)
	{
		cout << "ERROR" << endl;
	}
}

} // namespace ZH

int main()
{

	Triplet<double> t1(6.7,-3.89,7.132);
	cout << t1.biggest() << endl; // 7.132

	Triplet<string> t2("elso", "masodik", "harmadik");
	cout << t2.biggest() << endl; // masodik


	try
	{
		// Ezt a pár sort kell kivétel kezeléssel védeni (egyben).
		Triplet<char> t3('a', 'X', '5');
		cout << t3.biggest() << endl; // a
		Triplet<int> t4(7,7,7);
		cout << t4.biggest() << endl; // Ez dob kivételt
		Triplet<float> t5(5.4,6.7,5.76);
		cout << t5.biggest() << endl; // Ez már nem fut le
	}
	catch(exception &e)
	{
		cout << e.what() << endl; // All values are the same
	}

	Triplet<int> t_int1(4,5,6);
	Triplet<int> t_int2(7,4,8);
	Triplet<int> t_int3(1,6,2);
	Triplet<int> t_int4(5,5,5);
	compare<int>(t_int1, t_int2); // A masodik a nagyobb
	compare<int>(t_int2, t_int1); // Az elso a nagyobb
	compare<int>(t_int1, t_int4); // ERROR
	compare<int>(t_int4, t_int3); // ERROR


	return 0;
}
