// Zadanie6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a = 1, b = 9;

	cout << "a = " << a << ", b = " << b << endl;
	
	// wariant z zmienna tymczasowa
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a = " << a << ", b = " << b << endl;

	// wariant bez zmiennej tymczasowej
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
