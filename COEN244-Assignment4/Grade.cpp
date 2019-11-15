#include "Grade.h"
Grade::Grade(Course course, std::string grade)
	:m_course(course), m_grade(grade)
{}
std::ostream& operator<<(std::ostream& out, Grade& grade)
{
	out << "Course Name: " << grade.getcourse().getcourseName() << " Course Number: " << grade.getcourse().getcourseNumber() << " Course Grade: " << grade.getgrade() << std::endl;
	return out;
}
//get - set
Course Grade::getcourse() const { return m_course; };
void Grade::setcourse(Course c) { m_course = c; };
std::string Grade::getgrade() const { return m_grade; };
void Grade::setgrade(std::string g) { m_grade = g; };
//get - set