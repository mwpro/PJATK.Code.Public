#include "stdafx.h"
#include <iostream>
#include "UntilZero.h"

using namespace std;

void Go()
{
	int tmp, a, b, c;
	a = b = c = 0;

	cout << "Wprowadz liczbe:";
	cin >> tmp;

	while (tmp != 0)
	{
		if (a == 0)
			a = b = c = tmp;

		if (tmp > a)
		{
			c = b;
			b = a;
			a = tmp;	
		}			
		else if (tmp > b)
		{
			c = b;
			b = tmp;
		}			
		else if (tmp > c)
			c = tmp;

		cout << "Wprowadz liczbe:";
		cin >> tmp;
	} 

	if (a != b != c != 0)
		cout << a << ", " << b << ", " << c << endl;
}