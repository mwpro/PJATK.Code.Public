// Zadanie25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int* increase_size_of_array(int* input_array, int n)
{
	int* result = new int[n * 2];

	for (int i = 0; i < n; i++)
	{
		result[i] = input_array[i];
	}

	for (int i = n; i < 2 * n; i++)
	{
		result[i] = 0;
	}

	return result;
}

int main()
{
	int input[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int inputSize = 8;

	int* result = increase_size_of_array(input, inputSize);

	for (int i = 0; i < inputSize * 2; i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;

    return 0;
}

