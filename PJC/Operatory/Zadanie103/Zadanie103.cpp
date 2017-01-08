// Zadanie103.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Kolekcja_stringow.h"
#include <iostream>

using namespace std;
int main()
{
	kolekcja_stringow ks = kolekcja_stringow(3);
	ks(0, "aaaa");
	ks(1, "bbbb");
	ks(2, "cccc");

	kolekcja_stringow ks2 = ks;
	kolekcja_stringow ks3 = kolekcja_stringow(5);
	ks3 = ks2;

	cout << ks3 << endl;

    return 0;
}

