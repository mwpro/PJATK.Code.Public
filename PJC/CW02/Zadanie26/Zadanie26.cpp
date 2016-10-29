// Zadanie26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void get_min_and_max(double* input_array, int n, double &min_index, double &max_index)
{
	double min, max;
	min = max = input_array[0];
	min_index = max_index = 0;

	for (int i = 0; i < n; i++)
	{
		if (input_array[i] > max)
		{
			max = input_array[i];
			max_index = i;
		}
		if (input_array[i] < min)
		{
			min = input_array[i];
			min_index = i;
		}
	}
}

int main()
{
	double input[] = { -1, -2, 3, -4, 15, -6, 7, 8 };
	double minIndex, maxIndex;
	get_min_and_max(input, 8, minIndex, maxIndex);

	cout << minIndex << " " << maxIndex << endl; 

    return 0;
}

