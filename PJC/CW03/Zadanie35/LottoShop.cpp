#include "stdafx.h"
#include <iostream>
#include "LottoShop.h"
using namespace std;

Coupon readCoupon()
{
	Coupon result = new Numbers[amountOfTypesOnCoupon];

	for (int i = 0; i < amountOfTypesOnCoupon; i++)
	{
		cout << "Line " << i << "\n";
		result[i] = readNumbers();
	}

	return result;
}

Numbers readNumbers()
{
	Numbers result = new int[amountOfNumbersInDraw];

	cout << "Provide your types(" << amountOfNumbersInDraw << "): ";

	for (int i = 0; i < amountOfNumbersInDraw; i++)
	{
		cin >> result[i];
	}

	return result;
}

int* readExpectedResults()
{
	int* result = new int[amountOfNumbersInDraw];

	for (int i = 0; i < amountOfNumbersInDraw; i++)
	{
		cout << "How many times do you want to score " << i + 1 << "? ";
		cin >> result[i];
	}

	return result;
}