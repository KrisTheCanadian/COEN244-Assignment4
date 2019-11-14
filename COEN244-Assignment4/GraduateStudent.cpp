#include "GraduateStudent.h"

//double check these get/sets
Grade* GraduateStudent::getstuRecord() const { return m_studentRecord[m_max_number_of_graduatecourses]; };
void GraduateStudent::setstuRecord(Grade* grade) { m_studentRecord[m_max_number_of_graduatecourses] = grade; };