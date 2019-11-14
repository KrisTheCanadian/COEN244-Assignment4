#pragma once
#include <string>
#include "Student.h"
#include "Grade.h"

//Undergraduate student class

class UndergraduateStudent :
	public Student
{
public:
	UndergraduateStudent(std::string, int);
	Grade* getstuRecord() const;
	void setstuRecord(Grade*);
	~UndergraduateStudent();
	virtual void print() const; //prints student name, student-id and student record
private:
	static const int m_max_no_of_courses = 40;
	Grade* m_studentRecord[m_max_no_of_courses];
};

