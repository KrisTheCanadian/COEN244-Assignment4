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
	Grade** getstuRecord();
	void setstuRecord(Grade*);
	virtual bool checking_a_course(std::string) override;
	virtual bool register_a_course(Grade) override;
	virtual bool dropping_a_course(std::string) override;
	~UndergraduateStudent();//Not necessary
	virtual void print() const; //prints student name, student-id and student record
private:
	static const int m_max_no_of_courses = 40;
	Grade* m_studentRecord[m_max_no_of_courses];
};

