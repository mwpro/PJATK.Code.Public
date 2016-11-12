#include "stdafx.h"
#include <iostream>
#include "LottoMachine.h"
#include <time.h>
using namespace std;

bool isNumberInNumbers(Number number, Numbers numbers)
{
	for (int i = 0; i < amountOfNumbersInDraw; i++)
	{
		if (numbers[i] == number)
			return true;
	}
	return false;
}

Numbers draw()
{
	Numbers result = new int[amountOfNumbersInDraw];
	for (int i = 0; i < amountOfNumbersInDraw; i++)
	{
		result[i] = INT32_MIN;
	}

	for (int i = 0; i < amountOfNumbersInDraw; i++)
	{
		Number drawnNumber = INT32_MIN;
		do
		{
			drawnNumber = minNumber + (rand() % maxNumber);
		} while (isNumberInNumbers(drawnNumber, result));

		result[i] = drawnNumber;
	}

	return result;
}

void printDrawResults(Numbers drawResults)
{
	for (int i = 0; i < amountOfNumbersInDraw; i++)
	{
		cout << drawResults[i] << (i < amountOfNumbersInDraw - 1 ? ", " : "\n");
	}
}

Result checkResult(Numbers drawResults, Numbers types)
{
	Result result = 0;

	for (int i = 0; i < amountOfNumbersInDraw; i++)
	{
		for (int j = 0; j < amountOfNumbersInDraw; j++)
		{
			if (drawResults[i] == types[j])
				result++;
		}
	}

	return result;
}