#pragma once

// class declaration
class POINT // everything private by default
{
public:
	//POINT(char *); // ctor declaration
	//POINT(char *, double);
	//POINT(char *, double, double);
	POINT(char* = "def", double = 0, double = 0);
	POINT(const POINT& point); // copying constructor
	~POINT(); // destructor
	void show() const; // const, so executing this won modify the object
private:
	double _x;
	double _y;
	char* _name;
};

//struct PUNKT {}; // everything public by default