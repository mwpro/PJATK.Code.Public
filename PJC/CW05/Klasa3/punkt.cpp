#include "stdafx.h"
#include <iostream>
#include "punkt.h"
#include "util.h"

PUNKT::PUNKT(char * nazwa) 
	:_x(0), _y(0), _nazwa(c_string_duplicate(nazwa)) 
{
	//std::cout << "PUNKT::PUNKT(char * nazwa) " << _nazwa << std::endl;
} // lista inicjacji  - definicja

PUNKT::PUNKT(char * nazwa, double p) 
	: _x(p), _y(0), _nazwa(c_string_duplicate(nazwa)) {
	//std::cout << "PUNKT::PUNKT(char * nazwa, double p)  " << _nazwa << std::endl;
} // lista inicjacji  - definicja

PUNKT::PUNKT(char * nazwa, double x, double y) 
	: _x(x), _y(y), _nazwa(c_string_duplicate(nazwa)) {
	//std::cout << "PUNKT::PUNKT(char * nazwa, double x, double y)   " << _nazwa << std::endl;
} // lista inicjacji  - definicja


PUNKT::PUNKT(const PUNKT&p)
: _x(p._x), _y(p._y), _nazwa(c_string_duplicate(p._nazwa)) {
//	: _x(p._x), _y(p._y), _nazwa(p._nazwa) {
	//std::cout << "PUNKT::PUNKT(const PUNKT&p)   " << _nazwa << std::endl;
} // lista inicjacji  - definicja


PUNKT::~PUNKT() {
	std::cout << "PUNKT::~PUNKT()   " << _nazwa << std::endl;
	delete[]_nazwa;
	_nazwa = 0;
}

void PUNKT::show() const
{
	std::cout << _nazwa << " --- " << _x << ", " << _y << std::endl;
}

double odleglosc(const PUNKT& p1, const PUNKT& p2)
{
	double a = fabs(p1._x - p2._x); // niepotrzebne fabs, x^2 dzia³a jak abs
	double b = fabs(p1._y - p2._y);

	return sqrt(a * a + b * b);
}
