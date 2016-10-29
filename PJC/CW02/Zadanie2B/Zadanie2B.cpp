// Zadanie2B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void WyswietlNajwiekszyPodciag(int* input, int inputSize)
{
	int* result = NULL;
	int resultSize, resultSum = INT_MIN;

	for (int i = 0; i < inputSize; i++)
	{
		for (int j = 1; j <= inputSize - i; j++)
		{
			int tempSum = 0;
			int* tempResult = new int[j];
			for (int k = i, l = 0; k < i + j; k++, l++)
			{
				tempSum += input[k];
				tempResult[l] = input[k];

			}
			if (tempSum > resultSum)
			{
				result = tempResult;
				resultSize = j;
				resultSum = tempSum;
			}
			else
			{
				delete tempResult;
			}
		}
	}

	cout << "Suma " << resultSum << endl;
	for (int i = 0; i < resultSize; i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
}

int main()
{
	WyswietlNajwiekszyPodciag(new int[6]{ 1, 2, 3, 4, 5, 6 }, 6);
	WyswietlNajwiekszyPodciag(new int[6]{ 1, 2, 3, 4, -5, 6 }, 6);
	WyswietlNajwiekszyPodciag(new int[6]{ 1, -2, 3, 4, -5, 6 }, 6);
    return 0;
}

