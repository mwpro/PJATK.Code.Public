// Zadanie4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "my_header.h"

using namespace std;

int main()
{
	int a, b, c;

	cout << "Wprowadz a: ";
	cin >> a;

	cout << "Wprowadz b: ";
	cin >> b;

	cout << "Wprowadz c: ";
	cin >> c;

	cout << max(a, b, c) << endl;

    return 0;
}