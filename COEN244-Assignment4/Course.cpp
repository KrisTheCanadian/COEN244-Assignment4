#include "Course.h"

std::string Course::getcourseNumber() const { return m_courseNumber; };
void Course::setcourseNumber(std::string cNum) { m_courseNumber = cNum; };
std::string Course::getcourseName() const { return m_courseName; };
void Course::setcourseName(std::string cNam) { m_courseName = cNam; };