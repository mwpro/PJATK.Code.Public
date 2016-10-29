// Zadanie23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#define Wieksza(a,b) ((a>b) ? a : b)
#define Mniejsza(a,b) ((a<b) ? a : b)
#define WiekszaZTrzech(a,b,c) (Wieksza(a,b) > Wieksza(b,c) ? Wieksza(a,b) : Wieksza(b,c))
#define MniejszaZTrzech(a,b,c) (Mniejsza(a,b) < Mniejsza(b,c) ? Mniejsza(a,b) : Mniejsza(b,c))

#define SQRT int tmp; do { cin >> tmp; } while(tmp < 0); cout << sqrt(tmp); 

using namespace std;

int main()
{
	cout << Wieksza(500, 100) << endl
		 << Mniejsza (10000, 1) << endl
		
		 << WiekszaZTrzech(1,2,3) << endl
		 << WiekszaZTrzech(2,3,1) << endl
		 << WiekszaZTrzech(3,2,1) << endl

		 << MniejszaZTrzech(1,2,3) << endl
		 << MniejszaZTrzech(3,2,1) << endl
		 << MniejszaZTrzech(2,3,1) << endl; 

	SQRT;

    return 0;
}

