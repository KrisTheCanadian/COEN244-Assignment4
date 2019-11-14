#include "CourseSchedule.h"

Course CourseSchedule::getcourse() const { return m_course; };
void CourseSchedule::setcourse(Course c) { m_course = c; };
std::string CourseSchedule::getPrerequ() const { return m_coursePrerequisite; };
void CourseSchedule::setPrerequ(std::string s) { m_coursePrerequisite = s; };
Time CourseSchedule::gettime1() const { return m_time1; };
void CourseSchedule::settime1(Time t1) { m_time1 = t1; };
Time CourseSchedule::gettime2() const { return m_time2; };
void CourseSchedule::settime2(Time t2) { m_time2 = t2; };