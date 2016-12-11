#pragma once
#include "punkt.h"

class WIELOBOK {
public:
	// ctors
	WIELOBOK(int);
	WIELOBOK(const WIELOBOK&);
	~WIELOBOK();
	void increase(int);
	void decrease(int);
	void set(PUNKT*, int);
	void deleteP(int);
	const void show();
	const double getPermiter();
private:
	PUNKT **_p;
	int _numberOfItems;
};