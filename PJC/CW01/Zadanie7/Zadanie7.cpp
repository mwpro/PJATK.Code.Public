// Zadanie7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

unsigned int get_fibonacci(unsigned int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return (get_fibonacci(n - 1) + get_fibonacci(n - 2));
}

int main()
{
	unsigned int n;
	cout << "Podaj n ";
	cin >> n;

	cout << get_fibonacci(n) << endl;

	return 0;
}