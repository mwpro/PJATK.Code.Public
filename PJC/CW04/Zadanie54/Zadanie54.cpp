// Zadanie54.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Student.h"
#include "Students.h"

using namespace std;

void zadanie56()
{
	// utworzenie 3 elementowej kolekcji obiektów klasy Student
	Students *s = new Students(3);

	// utworzenie wskaŸników na obiekty klasy Student i utworzenie nowych obiektów
	Student *s1 = new Student("Adam", "Smyk", "82736372821", "s1020", 22, 1, true);
	Student *s2 = new Student("Arnold", "Smyk", "82736372823", "s1021", 22, 1, true);
	Student *s3 = new Student("Arnold", "Smyk", "82736372822", "s1031", 24, 1, false);

	// Wyœwietlenie informacji o studentach
	s1->show();
	s2->show();
	s3->show();

	// dodanie kopii obiektów klasy Student do kolekcji s
	s->add(s1);
	s->add(s2)->add(s3);

	// nie mamy wiêcej miejsca w kolekcji - b³¹d
	s->add(s1);

	// wyœwietlenie kolekcji   
	s->show();

	// usuniêcie ca³ej kolekcji  
	delete s;

	// Wyœwietlenie informacji o studentach - to powinno zadzia³aæ, bo przed chwil¹ usuneliœmy 
	// kolekcjê s, w której by³y kopie obiektów
	s1->show();
	s2->show();
	s3->show();

	// usuniêcie obiektów klasy Student
	delete s1;
	delete s2;
	delete s3;
}

int main()
{
	Student s1("Adam", "Smyk", "82736372821", "s1020", 22, 1, false);
	Student *s2 = new Student("Adam", "Smyk", "82736372821", "s1020", 22, 1, false);
	s1.show();
	s2->show();
	Student s1copy = s1;
	s1.show();

	Student s3("Adam", "Smyk", "82736372821", "s1020", 22, 1, true);
	Student s4("Arnold", "Smyk", "82736372823", "s1021", 22, 1, true);
	Student s5("Arnold", "Smyk", "82736372822", "s1031", 24, 1, false);
	s3.showDifferences(s4);
	s4.showDifferences(s5);
	s3.showDifferences(s3);

	cout << "-----------------------------------------------------------------" << endl;
	zadanie56();

    return 0;
}

