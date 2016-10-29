#include "stdafx.h"
#include "Deklaracje.h"

long SumaLiczb(int n) {       // definicja funkcji
	long result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i;
	}

	return result;
}
