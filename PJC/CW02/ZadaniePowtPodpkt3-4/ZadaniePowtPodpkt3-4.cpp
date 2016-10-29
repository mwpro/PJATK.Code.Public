// ZadaniePowtPodpkt3-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

int SumaDodatnich(int[], int); //deklaracja funkcji
int tab[25];  //definicja tablicy jednowymiarowej 25 elementowej

int main(void)
{
	//wype³nienie tablicy - skorzystaj z zadania 2A
	time_t t;
	srand((unsigned)time(&t));

	for (int i = 0; i < 25; i++)
	{
		tab[i] = -20 + (rand() % 31);
		cout << tab[i] << " ";
	}
	cout << endl;

	int wynik = SumaDodatnich(tab, 25);
	cout << "Wynik = " << wynik;

	return 0;
}

int SumaDodatnich(int tablica[], int dlugosc) { //definicja funkcji
	int suma = 0;
	for (int i = 0; i < dlugosc; i++)
	{
		if (tablica[i] > 0)
			suma += tablica[i];
	}

	return suma;
}
