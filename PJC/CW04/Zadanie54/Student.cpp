#include "stdafx.h"
#include <iostream>
#include "Student.h"
#include "util.h"

using namespace std;

Student::Student(char* firstName, char* lastName, char* pesel, char* id, int age, int semester, bool gender)
	: _firstName(cc_string_duplicate(firstName)), _lastName(cc_string_duplicate(lastName)), _pesel(cc_string_duplicate(pesel)),
	_id(cc_string_duplicate(id)), _age(age), _semester(semester), _gender(gender) { }

Student::Student(const Student& source) : Student(source._firstName, source._lastName, source._pesel, source._id, source._age, source._semester, source._gender) { } // copying constructor

Student::~Student()
{
	delete[] _firstName, _lastName, _pesel, _id, _age, _semester, _gender;
	_firstName = _lastName = _pesel = _id = 0;
	_age = _semester = _gender = 0;
}

void Student::show() const
{
	cout << _firstName << " " << _lastName << " " << _pesel << " " << _id << " " << _age << " " << _semester << " " << _printGender() << endl;
}

void Student::showDifferences(const Student other) const
{
	cout << "Differences\t: Left (this) object\tRight (parameter) object" << endl
		<< "---------------------------------------------------------------------------------" << endl;
	if (strcmp(_firstName, other._firstName))
		cout << "First Name\t: " << _firstName << "\t\t\t" << other._firstName << endl;

	if (strcmp(_lastName, other._lastName))
		cout << "Last name\t: " << _lastName << "\t\t" << other._lastName << endl;

	if (strcmp(_pesel, other._pesel))
		cout << "Pesel\t\t: " << _pesel << "\t\t" << other._pesel << endl;

	if (strcmp(_id, other._id))
		cout << "Student id\t: " << _id << "\t\t\t" << other._id << endl;

	if (_age != other._age)
		cout << "Age\t\t: " << _age << "\t\t\t" << other._age << endl;

	if (_gender != other._gender)
		cout << "Gender\t\t: " << _printGender() << "\t\t" << other._printGender() << endl;

	cout << "---------------------------------------------------------------------------------" << endl;
}

char* Student::_printGender() const
{
	return _gender ? "female" : "male";
}