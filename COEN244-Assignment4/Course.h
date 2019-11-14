#pragma once
#include <string>

//Defintion of the Course class. Each object of the Course class stores name and the number of a course.
class Course
{
public:
	//In the constructor, the parameters are used to initialize courseNumber, courseName
	Course(std::string, std::string);
	std::string getcourseNumber() const;
	void setcourseNumber(std::string);
	std::string getcourseName() const;
	void setcourseName(std::string);
	virtual void print();
	~Course();
private:
	std::string m_courseNumber; //Example: coursNumber = "COEN 244"
	std::string m_courseName; //Example: courseName = "ProgrammingMethodology" 
};

