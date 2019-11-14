#pragma once
#include <string>
#include "Student.h"
#include "Grade.h"

class GraduateStudent :
	public Student
{
public:
	GraduateStudent(std::string, int);
	Grade* getstuRecord() const;
	void setstuRecord(Grade*);
	~GraduateStudent();
	virtual void print() const; //print student name and student id and student record
private:
	static const int m_max_number_of_graduatecourses = 12;
	Grade* m_studentRecord[m_max_number_of_graduatecourses];
};

