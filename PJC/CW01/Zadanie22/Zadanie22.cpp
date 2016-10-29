// Zadanie22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define Polish 1
using namespace std;

int main()
{
	int one, two;
	cin >> one >> two;

#ifdef Polish
	cout << "Suma jest równa ";
#else
	cout << "Sum is equal ";
#endif

	cout << (one + two) << endl;

	// with #define Polish 1
	// Suma jest rowna
	// without Sum is equal

	return 0;
}

