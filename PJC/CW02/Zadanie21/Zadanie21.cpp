// Zadanie21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int* a, int* b) // 7.1
{
	int* tmp = a;
	a = b;
	b = a;
}

int main()
{
	int a = 1, b = 3;

	swap(a, b);

	cout << a << " " << b << endl;
    return 0;
}

