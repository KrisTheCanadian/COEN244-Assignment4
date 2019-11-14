#include "CourseRegistration.h"
//Double check first get/set
int CourseRegistration::getregisteredCourse() const { return m_registeredtoCourse[m_classSize]; };
void CourseRegistration::setregisteredCourse(int m) { m_registeredtoCourse[m_classSize] = m; };
//
int CourseRegistration::getno_of_students() const { return m_no_of_registeredStudents; };
void CourseRegistration::setno_of_students(int s) { m_no_of_registeredStudents = s; };