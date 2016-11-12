#include "stdafx.h"
#include <iostream>
using namespace std;

int MUL(int a, int b) 
{
	// http://stackoverflow.com/a/4515365
	int result = 0;
	while (b != 0)
	{
		if (b & 01)
		{
			result = result + a;
		}
		a <<= 1;

		b >>= 1;
	}

	return result;
}

int DIVIDE(int a, int b)
{
	// no idea... yet :)
}

int main()
{
	cout << MUL(3, 3) << endl
		<< MUL(15, 2) << endl
		<< MUL(66, 1) << endl
		<< MUL(14, 5) << endl;

	cout << DIVIDE(6, 2) << endl
		<< DIVIDE(13, 3) << endl
		<< DIVIDE(25, 5) << endl
		<< DIVIDE(1, 10) << endl;
    return 0;
}

