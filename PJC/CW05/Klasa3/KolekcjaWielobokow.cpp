#include "stdafx.h"
#include "KolekcjaWielobokow.h"
#include <iostream>

KOLEKCJA_WIELOBOKOW::KOLEKCJA_WIELOBOKOW(int n)
	: _numberOfItems(n)
{
	_w = new WIELOBOK*[_numberOfItems]();
}

KOLEKCJA_WIELOBOKOW::KOLEKCJA_WIELOBOKOW(const KOLEKCJA_WIELOBOKOW & source)
	: _numberOfItems(source._numberOfItems)
{
	_w = new WIELOBOK*[_numberOfItems]();

	for (int i = 0; i < _numberOfItems; i++)
	{
		insert(*source._w[i], i);
	}
}

KOLEKCJA_WIELOBOKOW::~KOLEKCJA_WIELOBOKOW()
{
	delete[] _w;
	_w = nullptr;
}

const void KOLEKCJA_WIELOBOKOW::show()
{
	for (int i = 0; i < _numberOfItems; i++)
	{
		std::cout << i << " ";
		if (_w[i] != nullptr)
			_w[i]->show();
		else
			std::cout << "niezdefiniowany" << std::endl;
	}
}

void KOLEKCJA_WIELOBOKOW::insert(const WIELOBOK & w, int n)
{
	delete _w[n];
	WIELOBOK* nw = new WIELOBOK(w);
	_w[n] = nw;
}

void KOLEKCJA_WIELOBOKOW::deleteW(int n)
{
	delete _w[n];
	_w[n] = nullptr;
}

const WIELOBOK & KOLEKCJA_WIELOBOKOW::getMax()
{
	double maxVal = 0.00;
	int maxIndex = 0;

	for (int i = 0; i < _numberOfItems; i++)
	{
		if (_w[i]->getPermiter() > maxVal)
		{
			maxVal = _w[i]->getPermiter();
			maxIndex = i;
		}
	}

	return *_w[maxIndex];
}
