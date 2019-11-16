#include "Course.h"
Course::Course(std::string courseNumber, std::string courseName)
	:m_courseNumber(courseNumber), m_courseName(courseName)
{}
Course::Course()
	: m_courseNumber(""), m_courseName("")
{}
void Course::print() { std::cout << "Course Number: " << this->m_courseNumber << std::endl; std::cout << "Course Name: " + this->m_courseName << std::endl; };
void Course::setcourseName(std::string courseName) { this->m_courseName = courseName; };
std::string Course::getcourseNumber() const { return m_courseNumber; };
void Course::setcourseNumber(std::string cNum) { m_courseNumber = cNum; };
std::string Course::getcourseName() const { return m_courseName; };

Course::~Course() {};