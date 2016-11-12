#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "LottoMachine.h"
#include "LottoShop.h"
#include "LottoBot.h"
using namespace std;

int main()
{
	time_t t;
	srand((unsigned)time(&t)); // important to setup rand here, just once, not in draw() method  

	// User entry
	//Coupon myNumbers = readCoupon();
	//int* expectations = readExpectedResults();

	// Or hardcoded values
	Coupon myNumbers = new Numbers[amountOfTypesOnCoupon] { 
		new int[amountOfNumbersInDraw] { 7, 11, 29, 46, 47, 48 },
		new int[amountOfNumbersInDraw] { 5, 8, 24, 31, 44, 45 },
		new int[amountOfNumbersInDraw] { 6, 7, 17, 22, 25, 42 },
		new int[amountOfNumbersInDraw] { 7, 8, 17, 22, 26, 38 },
		new int[amountOfNumbersInDraw] { 3, 6, 26, 37, 43, 45 },
		new int[amountOfNumbersInDraw] { 9, 16, 21, 28, 32, 34 }
	};
	// int* expectations = new int[amountOfNumbersInDraw]{ 0, 0, 1, 0, 0, 0 }; // "jedna trojka" // TODO let the user enter it
	// int* expectations = new int[amountOfNumbersInDraw]{ 0, 0, 2, 0, 0, 0 }; // "dwie trojki"
	// int* expectations = new int[amountOfNumbersInDraw]{ 0, 0, 0, 1, 2, 0 }; // "dwie piatki i jedna czworka"
	int* expectations = new int[amountOfNumbersInDraw] { 0, 0, 0, 0, 0, 1 }; // "szostka"

	play(myNumbers, expectations);

	return 0;
}

