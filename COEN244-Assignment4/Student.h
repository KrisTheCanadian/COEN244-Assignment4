#pragma once
#include <string>
#include "Grade.h"
//Definition of Student class. Each object of this class stores name and id of a student and his course grades and currently enrolled courses.

class Student
{
public:
	Student(std::string, int);

	std::string getstuName() const;
	void setstuName(std::string);
	int getstudID() const;
	void setstudID(int);
	//checking whether a student has taken or registered to a course.
	bool checking_a_couse(std::string); //coursenumber

	//add a course grade to a student's record.
	bool register_a_course(Grade);

	//dropping a registered course from a student's record
	bool dropping_a_course(std::string); //coursenumber
	virtual void print(); //print student name and id.
	~Student();
private:
	std::string m_studentName;
	int m_studentId;
};

