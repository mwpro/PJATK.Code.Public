#include "stdafx.h"
#include <iostream>
#include "LottoBot.h"
using namespace std;

bool expectationsMeet(int* expecations, int* currentResult)
{
	for (int i = 0; i < amountOfNumbersInDraw; i++)
	{
		if (currentResult[i] < expecations[i])
			return false;
	}
	return true;
}

bool isExpectedResult(int* expecations, Result result)
{
	return expecations[result - 1] > 0;
}

void play(Coupon numbers, int* expectations)
{
	int* overallResults = new int[amountOfNumbersInDraw];
	long drawId = 0;

	for (int i = 0; i < amountOfNumbersInDraw; i++)
	{
		overallResults[i] = 0;
	}

	while (!expectationsMeet(expectations, overallResults))
	{
		Numbers drawnNumbers = draw();

		for (int i = 0; i < amountOfTypesOnCoupon; i++)
		{
			Result drawResult = checkResult(drawnNumbers, numbers[i]);
			drawId++;

			if (isExpectedResult(expectations, drawResult))
			{
				overallResults[drawResult - 1]++;
				cout << "Draw #" << drawId << " Scored " << drawResult << " for set " << i << "! ";
				printDrawResults(drawnNumbers);
			}
		}

		delete drawnNumbers; // try to delete this line and watch memory usage :)
	} 
}