#pragma once

// class declaration
class Student
{
public:
	Student(char* firstName, char* lastName, char* pesel, char* id, int age, int semester, bool gender);
	Student(const Student& source); // copying constructor
	~Student(); // destructor
	void show() const; // const, so executing this won modify the object
	void showDifferences(const Student other) const;
private:
	char* _printGender() const;
	char* _firstName;
	char* _lastName;
	char* _pesel;
	char* _id;
	int _age;
	int _semester;
	bool _gender;
};

//struct PUNKT {}; // everything public by default