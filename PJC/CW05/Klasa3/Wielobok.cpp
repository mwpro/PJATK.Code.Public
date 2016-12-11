#include "stdafx.h"
#include "Wielobok.h"
#include <iostream>

WIELOBOK::WIELOBOK(int n) : _numberOfItems(n)
{
	_p = new PUNKT*[_numberOfItems]();
	// powinnismy sprawdzic czy n >= 3
}

WIELOBOK::WIELOBOK(const WIELOBOK& source)
	: _numberOfItems(source._numberOfItems)
{
	_p = new PUNKT*[_numberOfItems]();

	for (int i = 0; i < _numberOfItems; i++)
	{
		set(source._p[i], i); // czy poprawnie kopiuje?
	}
}

WIELOBOK::~WIELOBOK()
{
	delete[] _p;
	_p = nullptr;
}

void WIELOBOK::increase(int n)
{
	PUNKT ** newP = new PUNKT*[_numberOfItems + n]();

	for (int i = 0; i < _numberOfItems; i++)
	{
		newP[i] = _p[i];
	}
	delete _p; // raczej nie delete[]

	_p = newP;
	_numberOfItems += n;
}

void WIELOBOK::decrease(int n)
{
	if (n >= _numberOfItems)
		return;

	PUNKT ** newP = new PUNKT*[_numberOfItems - n]();

	for (int i = 0; i < _numberOfItems - n; i++)
	{
		newP[i] = _p[i];
	}
	delete _p; // raczej nie delete[]

	_p = newP;
	_numberOfItems -= n;
}

void WIELOBOK::set(PUNKT* p, int n)
{
	// nie sprawdzam czy p nie przekracza n
	delete _p[n];
	PUNKT* np = new PUNKT(*p);
	_p[n] = np;
}

void WIELOBOK::deleteP(int n)
{
	// nie sprawdzam czy p nie przekracza n
	delete _p[n];
	_p[n] = nullptr;
}

const void WIELOBOK::show()
{
	std::cout << "ilosc bokow " << _numberOfItems << std::endl;

	for (int i = 0; i < _numberOfItems; i++)
	{
		std::cout << i << " ";
		if (_p[i] != nullptr)
			_p[i]->show();
		else
			std::cout << "niezdefiniowane" << std::endl;
	}
}

const double WIELOBOK::getPermiter()
{
	double result = 0.0;

	for (int i = 0; i < _numberOfItems - 1; i++)
	{
		result += odleglosc(*_p[i], *_p[i + 1]);
	}
	result += odleglosc(*_p[0], *_p[_numberOfItems-1]);
	return result;
}