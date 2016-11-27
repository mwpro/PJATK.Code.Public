#include "stdafx.h"
#include <iostream>
#include "point.h"
#include "util.h"
using namespace std;

//POINT::POINT(char * name) : _x(0), _y(0), _name(cc_string_duplicate(name)) {}
//POINT::POINT(char * name, double x) : _x(x), _y(0), _name(cc_string_duplicate(name)) {}
POINT::POINT(char * name, double x, double y) : _x(x), _y(y), _name(cc_string_duplicate(name)) 
{
	cout << "Constructor POINT(char * name, double x, double y), " << _name << endl;
}
POINT::POINT(const POINT& point) : _x(point._x), _y(point._y), _name(cc_string_duplicate(point._name)) 
{ 
	cout << "Constructor POINT(const POINT& point, " << _name << endl;
}


POINT::~POINT()
{
	cout << "Destructor, " << _name  << endl;
	delete[] _name;
	_name = 0;
}

void POINT::show() const { cout << _name << " --- " << _x << ", " << _y << endl; };