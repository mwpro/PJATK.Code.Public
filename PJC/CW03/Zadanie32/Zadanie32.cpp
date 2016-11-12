#include "stdafx.h"

int main()
{
	typedef int A[4];
	typedef int* B[4];

	// 3
	typedef double C[3];
	typedef C* D[10];

	//4
	typedef float *const E;
	typedef E F[5];
	typedef E& G;

	// 5
	typedef int& a;
	typedef A B[5];

	// 6
	// sample: double(*f)(double);
	typedef int *const A;
	typedef A B[4];
	typedef int&(*C)(B);
	typedef C* D;
	
    return 0;
}

