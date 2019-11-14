#pragma once
#include <string>
#include "Course.h"

//Definition of Grade class. Each object of the Grade lass stores a letter grade for the given course

class Grade
{
public:
	Grade(Course, std::string);
	Course getcourse() const;
	void setcourse(Course);
	std::string getgrade() const;
	void setgrade(std::string);
	//Overload the insertion opertator to output the data members of a Grade object.
	friend std::ostream& operator<<(std::ostream&, Grade&);
private:
	Course m_course;
	std::string m_grade; //course grades are A, B, C, D, F and I (I is the grade if currently enrolled)
};

