// Klasa3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "punkt.h"
#include "prostokat.h"
#include "Wielobok.h"
#include "KolekcjaWielobokow.h"

int main()
{
	/*PROSTOKAT p1 = PROSTOKAT(-1, -1, 2, 3);

	std::cout << p1.pole() << std::endl;
	std::cout << liczPole(p1) << std::endl;*/

	WIELOBOK kwadrat = WIELOBOK(4);
	kwadrat.increase(1);
	kwadrat.decrease(3);
	kwadrat.increase(5);
	kwadrat.decrease(2);
	//w.show();
	kwadrat.set(&PUNKT("p1", 0, 0), 0);
	kwadrat.set(&PUNKT("p2", 10, 0), 1);
	kwadrat.set(&PUNKT("p3", 10, 10), 2);
	kwadrat.set(&PUNKT("p4", 11, 10), 3);
	kwadrat.set(&PUNKT("p5", -5, -5), 4);
	kwadrat.show();
	kwadrat.deleteP(4);
	kwadrat.decrease(1);
	kwadrat.set(&PUNKT("p4", 0, 10), 3);
	kwadrat.show();
	std::cout << kwadrat.getPermiter() << std::endl;
	WIELOBOK trojkat = WIELOBOK(kwadrat);
	trojkat.decrease(1);
	trojkat.show();
	std::cout << trojkat.getPermiter() << std::endl;

	KOLEKCJA_WIELOBOKOW kw = KOLEKCJA_WIELOBOKOW(2);
	
	kw.insert(kwadrat, 0);
	kw.insert(kwadrat, 1);
	kw.deleteW(1);
	kw.insert(kwadrat, 1);
	
	kw.show();
	WIELOBOK max = kw.getMax();
	max.show();
	return 0;
}

