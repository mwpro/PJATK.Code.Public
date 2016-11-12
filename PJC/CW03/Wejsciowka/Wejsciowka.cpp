// Wejsciowka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void a(int &x, int &y, int &z)
{
	if (x > y)
		swap(x, y);
	if (x > z)
		swap(x, z);
	if (y > z)
		swap(y, z);

}

bool sumyPolowek(int*tab, int n, int&maxL, int &maxR, int &minL, int &minR)
{
	if (n % 2 != 0) return false;
	int sumaL, sumaR;
	sumaL = sumaR = 0;
	maxL = minL = tab[0];
	maxR = minR = tab[n / 2];

	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
		{
			sumaL += tab[i];
			if (tab[i] > maxL)
				maxL = tab[i];
			if (tab[i] < minL)
				minL = tab[i];
		}
		else
		{
			sumaR += tab[i];
			if (tab[i] > maxR)
				maxR = tab[i];
			if (tab[i] < minR)
				minR = tab[i];
		}
	}

	return sumaL > sumaR;
}

int main()
{
	int x = 3, y = 2, z = 1;
	a(x, y, z);
	cout << x << " " << y << " " << z << endl;

	int maxL, maxR, minL, minR;
	maxL = maxR = minL = minR = 0;
	bool result = sumyPolowek(new int[8]{ 1, 2, 3, 7, 4, 5, 3, 4 }, 8, maxL, maxR, minL, minR);
	cout << result << " " << minL << " " << maxL << " " << minR << " " << maxR << endl;

	result = sumyPolowek(new int[8]{ 4, 5, 3, 4, 1, 2, 3, 7 }, 8, maxL, maxR, minL, minR);
	cout << result << " " << minL << " " << maxL << " " << minR << " " << maxR << endl;

	return 0;
}