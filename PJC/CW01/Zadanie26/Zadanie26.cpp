// Zadanie26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES 1
#include <math.h>
using namespace std;

void print_sinus()
{
	for (double angle = 0; angle <= 360; angle = angle + 30)
	{
		cout << "sin(" << angle << "deg) = " << sin((angle/360)*2*M_PI) << endl;
	}
}

int main()
{
	print_sinus();
	return 0;
}