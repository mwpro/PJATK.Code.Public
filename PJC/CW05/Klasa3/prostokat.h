#pragma once
#include "punkt.h"

class PROSTOKAT {
public:
	PROSTOKAT(double, double, double, double);
	PROSTOKAT(const PUNKT&, const PUNKT&);
	double pole();
	friend double liczPole(const PROSTOKAT);
private:
	PUNKT _ld;
	PUNKT _pg;
	PUNKT * _PP;
};