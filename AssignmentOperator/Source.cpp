#include <iostream>

using namespace std;

int main()
{
	// Синтаксис оператора присваивания:
	//      имя = выражение;
	// имя - имя переменной, которой будет присвоено значение.
	// выражение - выражение, результат которого будет присвоен переменной.

	int nResult;
	nResult = 4;

	cout << "nResult = " << nResult << endl;

	int nValue = 1;
	nResult = nValue;

	cout << "nResult = " << nResult << endl;

	// Множественные присваивания - присваивания одного и того же значения нескольким переменным 
	// одновременно.
	// Синтаксис множественного присваивания:
	//      имя1 = имя2 = выражение;

	double dblNumber1;
	double dblNumber2;
	dblNumber1 = dblNumber2 = 3.5;

	cout << "dblNumber1 = " << dblNumber1 << endl;
	cout << "dblNumber2 = " << dblNumber2 << endl;

	return 0;
}