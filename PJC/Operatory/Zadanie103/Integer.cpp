#include "stdafx.h"
#include <iostream>
#include "Kolekcja_stringow.h"
using namespace std;

// kolekcja_stringow.h

// kolekcja_stringow.cpp
kolekcja_stringow::kolekcja_stringow(int n)
{
	values = new char*[n];
	size = n;
}

kolekcja_stringow::kolekcja_stringow(const kolekcja_stringow& src)
{
	values = new char*[src.size];
	size = src.size;
	for (int i = 0; i < src.size; i++)
	{
		strcpy(values[i], src.values[i]);
	}
}

kolekcja_stringow::~kolekcja_stringow()
{
	delete[] values;
	values = nullptr;
}

void kolekcja_stringow::operator()(int n, char* text)
{
	//delete values[n];
	values[n] = text;
}

kolekcja_stringow& kolekcja_stringow::operator=(const kolekcja_stringow& rhs)
{
	delete[] values;
	size = rhs.size;
	values = new char*[rhs.size];
	for (int i = 0; i < rhs.size; i++)
	{
		strcpy(values[i], rhs.values[i]);
	}

	return *this;
}

ostream& operator<<(ostream& out, const kolekcja_stringow& ks)
{
	for (int i = 0; i < ks.size; i++)
	{
		out << ks.values[i];
	}
	return out;
}