#pragma once
#include "Student.h"

class Students
{
public:
	Students(int count);
	Students(const Students& source);
	~Students();
	Students* add(Student* student);
	void show() const;
private:
	int _count;
	Student** _students;
};