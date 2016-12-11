#pragma once
#include "stdafx.h"
#include "wielobok.h"

class KOLEKCJA_WIELOBOKOW
{
public:
	KOLEKCJA_WIELOBOKOW(int);
	KOLEKCJA_WIELOBOKOW(const KOLEKCJA_WIELOBOKOW&);
	~KOLEKCJA_WIELOBOKOW();
	const void show();
	void insert(const WIELOBOK&, int);
	void deleteW(int);
	const WIELOBOK& getMax();
private:
	WIELOBOK **_w;
	int _numberOfItems;
};