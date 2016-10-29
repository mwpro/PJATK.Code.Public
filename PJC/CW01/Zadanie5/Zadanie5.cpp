// Zadanie5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double a;

	cout << "Wprowadz liczbe: ";
	cin >> a;


	cout << "Czesc calkowita = " << (int)a << endl
		<< "Czesc ulamkowa = " << a - (int)a << endl; // ?????

    return 0;
}

