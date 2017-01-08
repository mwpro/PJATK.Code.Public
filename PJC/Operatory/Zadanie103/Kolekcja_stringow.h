#pragma once
#include <iostream>

class kolekcja_stringow {
	char ** values;
	int size;
public:
	kolekcja_stringow(int);
	kolekcja_stringow(const kolekcja_stringow&);
	~kolekcja_stringow();

	void operator()(int, char*);
	kolekcja_stringow& operator=(const kolekcja_stringow&);

	friend std::ostream& operator<<(std::ostream&, const kolekcja_stringow&);
};
