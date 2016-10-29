// Zadanie20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intVariable = 1, int2 = 222;
	double doubleVariable = 3.14;
	char charVariable = 'X';

	cout << "value\taddress\t\tbytes\tbits" << endl
		<< intVariable << "\t" << &intVariable << "\t" << sizeof(intVariable) << "\t" << sizeof(intVariable) * 8 << endl
		<< doubleVariable << "\t" << &doubleVariable << "\t" << sizeof(doubleVariable) << "\t" << sizeof(doubleVariable) * 8 << endl
		<< charVariable << "\t" << static_cast<int*>(static_cast<void*>(&charVariable)) << "\t" << sizeof(charVariable) << "\t" << sizeof(charVariable) * 8 << endl;

	int& intReference = intVariable;
	double& doubleReference = doubleVariable;
	char& charReference = charVariable;
	intReference++;
	doubleReference++;
	charReference++;

	cout << intVariable << "\t" << &intVariable << "\t" << sizeof(intVariable) << "\t" << sizeof(intVariable) * 8 << endl
		<< doubleVariable << "\t" << &doubleVariable << "\t" << sizeof(doubleVariable) << "\t" << sizeof(doubleVariable) * 8 << endl
		<< charVariable << "\t" << static_cast<int*>(static_cast<void*>(&charVariable)) << "\t" << sizeof(charVariable) << "\t" << sizeof(charVariable) * 8 << endl;

	intReference = int2;
	intReference++;
	cout << intReference << " " << intVariable << " " << int2 <<  endl;

	int* intPointer = &intVariable;
	(*intPointer)++;
	cout << *intPointer << endl
		<< &intPointer << endl;

    return 0;
}

