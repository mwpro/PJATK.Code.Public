// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

typedef long* longPtr;
typedef longPtr lpa[5];
typedef lpa* A;

typedef double** double2Ptr;
typedef double2Ptr* B;

typedef B&(*C)(const A*);

B& fun(const A* a)
{
	B result = NULL;
	return result;
}

void z(int x)
{
	for (int i = 15; i >= 8; i--)
	{
		cout << ((x >> i) & 1);
	}
}

int main()
{
	C c = &fun;

	A x = 0;
	c(&x);

	z(256);cout << endl;
	z(512);cout << endl;
	z(1024);

	return 0;
}

