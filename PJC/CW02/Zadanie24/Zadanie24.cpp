// Zadanie24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

long iloczyn_skalarny(long* a, long* b, long n)
{
	long result = 0;

	for (long i = 0; i < n; i++)
	{
		result += a[i] * b[i];
	}

	return result;
}

int main()
{
	long a[] = { 1, 2, 3 };
	long b[] = { 3, 2, 1 };
	long n = 3;

	cout << iloczyn_skalarny(a, b, n) << endl;

    return 0;
}

