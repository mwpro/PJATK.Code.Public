// Zadanie3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned int a = 0, temp;

	for (int i = 0; i < 3; i++)
	{
		cout << "wprowadz liczbe: ";
		cin >> temp;
		if (temp > a)
			a = temp;
	}

	cout << "Maksymalna liczba to: " << a << endl;

	system("pause");
    return 0;
}

