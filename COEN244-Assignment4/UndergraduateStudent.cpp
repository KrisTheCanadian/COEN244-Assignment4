#include "UndergraduateStudent.h"

//Double check these get/sets
Grade* UndergraduateStudent::getstuRecord() const { return m_studentRecord[m_max_no_of_courses]; };
void UndergraduateStudent::setstuRecord(Grade* grade) { m_studentRecord[m_max_no_of_courses] = grade; };