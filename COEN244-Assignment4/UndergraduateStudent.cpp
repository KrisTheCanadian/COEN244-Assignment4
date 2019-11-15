#include "UndergraduateStudent.h"

UndergraduateStudent::UndergraduateStudent(std::string stuName, int stuID)
	:Student(stuName,stuID)
{}

//Double check these get/sets
Grade **UndergraduateStudent::getstuRecord() { return m_studentRecord; };