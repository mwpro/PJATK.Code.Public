#include "stdafx.h"
#include "punkt.h"
#include "prostokat.h"
#include "math.h"

PROSTOKAT::PROSTOKAT(double x1, double y1, double x2, double y2) :
	_ld("ld", x1, y1), _pg("pg", x2, y2) {

	_PP = new PUNKT("", 0, 0);
}

PROSTOKAT::PROSTOKAT(const PUNKT&p1, const PUNKT&p2) :
	_ld(p1), _pg(p2) {}

double PROSTOKAT::pole()
{ // z za³o¿eniem, ¿e _lg jest poni¿ej _pg
	double x = _pg._x - _ld._x;
	double y = _pg._y - _ld._y;

	return x * y;
}

double liczPole(const PROSTOKAT p)
{
	double x = p._pg._x - p._ld._x;
	double y = p._pg._y - p._ld._y;

	return x * y;
}