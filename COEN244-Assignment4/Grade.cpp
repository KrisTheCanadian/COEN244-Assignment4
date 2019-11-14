#include "Grade.h"

Course Grade::getcourse() const { return m_course; };
void Grade::setcourse(Course c) { m_course = c; };
std::string Grade::getgrade() const { return m_grade; };
void Grade::setgrade(std::string g) { m_grade = g; };