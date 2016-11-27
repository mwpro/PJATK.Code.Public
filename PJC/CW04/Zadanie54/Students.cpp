#include "stdafx.h"
#include <iostream>
#include "Student.h"
#include "util.h"
#include "Students.h"

using namespace std;

Students::Students(int count) : _count(count), _students(new Student*[count] { nullptr }) { }

Students::Students(const Students& source) : _count(source._count), _students(new Student*[_count])
{
	for (int i = 0; i < _count; i++)
	{
		_students[i] = source._students[i];
	}
}

Students::~Students()
{
	delete[] _students;
	_students = 0;
}

Students* Students::add(Student* student)
{
	for (int i = 0; i < _count; i++)
	{
		if (_students[i] == nullptr)
		{
			_students[i] = student;

			return this;
		}
	}

	return this;
}

void Students::show() const
{
	for (int i = 0; i < _count; i++)
	{
		if (_students[i] != nullptr)
		{
			cout << i << ":" << endl;
			_students[i]->show();
		}
	}
}