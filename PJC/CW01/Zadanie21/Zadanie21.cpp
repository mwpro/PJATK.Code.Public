// Zadanie21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int f1 = 10, f2 = 20;
	cout << "Linia 1 " << f1++ + f2++ << endl; // displays 30
	cout << "Linia 2 " << f1 << "," << f2++ << endl; // displays 11 21
	f1 = 10;
	f2 = 20;
	cout << "Linia 3 " << ++f1 + ++f2 << endl; // displays 32
	cout << "Linia 4 " << f1 << "," << f2++ << endl; // displays 11 21 
	f1 = 10;
	f2 = 20;
	cout << "Linia 5 " << (f1++<f2++ ? ++f1 : ++f2) << endl; // displays 12
	cout << "Linia 6 " << f1 << "," << f2++ << endl; // displays 12 21

	return 0;
}

