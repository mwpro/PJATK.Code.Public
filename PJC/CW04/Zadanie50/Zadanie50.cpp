// Zadanie50.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "point.h"

POINT P1("P1");

int main()
{
	POINT P2 = P1;
	{
		POINT P3("P3", 100);
		P1.show();
		P2.show();
		P3.show();
	}
	//#1
	// P1.POINT::~POINT(); // Why this fails?
	POINT P4("P4", 200, 200);
	P4.show();

	return 0;
}

