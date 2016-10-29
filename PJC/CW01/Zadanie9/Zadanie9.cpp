// Zadanie9.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#define N 10

using namespace std;

int main()
{
	int numbers[N], iloscPar = 0;

	for (int i = 0; i < N; i++)
	{
		cout << "Wprowadz liczbe: ";
		cin >> numbers[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		if (numbers[i] < numbers[i+1])
		{
			cout << "Znaleziono pare: " << numbers[i] << " " << numbers[i + 1] << endl;
			iloscPar++;
		};
	}

	cout << "Razem par: " << iloscPar << endl;

    return 0;
}

