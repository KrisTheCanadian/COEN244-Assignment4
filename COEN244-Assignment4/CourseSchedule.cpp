#include "CourseSchedule.h"
#include <iostream>
CourseSchedule::CourseSchedule(Course course, std::string preReq, Time time1, Time time2)
	:m_course(course), m_coursePrerequisite(preReq), m_time1(time1), m_time2(time2)
{}
void CourseSchedule::CourseSchedule::print() {
	this->m_course.print();
	std::cout << "Prerequisite: " << this->m_coursePrerequisite << " Start Time: " << this->m_time1 << " End Time: " << this->m_time2 << std::endl;
}
Course CourseSchedule::getcourse() const { return m_course; };
void CourseSchedule::setcourse(Course c) { m_course = c; };
std::string CourseSchedule::getPrerequ() const { return m_coursePrerequisite; };
void CourseSchedule::setPrerequ(std::string s) { m_coursePrerequisite = s; };
Time CourseSchedule::gettime1() const { return m_time1; };
void CourseSchedule::settime1(Time t1) { m_time1 = t1; };