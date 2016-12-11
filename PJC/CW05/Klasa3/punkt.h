#pragma once

// deklarcje
class PUNKT {
public:
	PUNKT(char *); // deklaracja	
	PUNKT(char *, double);
	PUNKT(char *, double, double);
	PUNKT(const PUNKT&);	
	~PUNKT(); // deklaracja destruktora
	void show() const;

	friend class PROSTOKAT;
	friend double liczPole(const PROSTOKAT);
	friend double odleglosc(const PUNKT&, const PUNKT&);
private:
	double _x;
	double _y;
	char * _nazwa;
};

