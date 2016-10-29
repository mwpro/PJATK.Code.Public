// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define ODWROC(a) (1000*(a%10)+100*((a%100)/10)+10*((a%1000)/100)+(a%10000)/1000)
//w rozwiazaniu #define dziesiatki (a/10)%10 itd
// rozwiazanie moje za 4 pkt
using namespace std;

int main()
{
	cout << ODWROC(1234) << endl << ODWROC(1111) << endl << ODWROC(1345) << endl << ODWROC(9812);

	double tmp, min = -1, liczba = -1;

	cin >> tmp;
	while (tmp >= 0)
	{
		double ulamek = (double)(tmp - (int)tmp);
		cout << ulamek;
		if (min == -1)
		{
			min = ulamek;
			liczba = tmp;
		}

		if (ulamek < min)
		{
			min = ulamek;
			liczba = tmp;
		}
		cin >> tmp;
	}
	cout << liczba;

    return 0;
}

