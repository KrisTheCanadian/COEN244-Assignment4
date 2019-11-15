#include "CourseRegistration.h"
CourseRegistration::CourseRegistration(Course course)
	:m_no_of_registeredStudents(0)
{
	this->setcourseName(course.getcourseName());
	this->setcourseNumber(course.getcourseNumber());
	for (int i = 0; i < this->m_classSize; i++) {
		m_registeredtoCourse[i] = -1; //initializing the array to invalid student IDs
	}
}
int *CourseRegistration::getregisteredCourse() { 
	return this->m_registeredtoCourse; 
};

int CourseRegistration::getno_of_students() const { return m_no_of_registeredStudents; };
void CourseRegistration::setno_of_students(int s) { m_no_of_registeredStudents = s; }
bool CourseRegistration::register_a_course(int)
{
	return false;
}
bool CourseRegistration::dropping_a_course(int)
{
	return false;
}
void CourseRegistration::print()
{
}
;