#include "stdafx.h"
#include <iostream>
#include "my_header.h"

unsigned int max(unsigned int a, unsigned int b, unsigned int c)
{
	if (a > b && a < c)
		return a;
	else if (b > a && b < c)
		return b;
	else
		return c;
}