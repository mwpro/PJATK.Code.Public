// Zadanie10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#define MIN 0
#define MAX 500
using namespace std;

int main()
{
	int min = MIN, max = MAX, guessAttempt,	feedback;
	
	do
	{
		guessAttempt = min + (max - min) / 2;
		cout << "Czy Twoja liczba to " << guessAttempt << "? ";

		do
		{
			cin >> feedback;
		} while (feedback != 0 && feedback != 1 && feedback != 2);

		if (feedback == 1)
		{
			max = guessAttempt;
		}
		if (feedback == 2)
		{
			min = guessAttempt;
		}

	} while (feedback != 0);
	
	cout << "Twoja liczba to " << guessAttempt << endl;
	return 0;
}

