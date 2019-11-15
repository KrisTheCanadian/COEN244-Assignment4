#include "UndergraduateStudent.h"

UndergraduateStudent::UndergraduateStudent(std::string stuName, int stuID)
	:Student(stuName, stuID)
{
	for (Grade* gradeptr : m_studentRecord) {
		gradeptr = nullptr;
	}
};

//Double check these get/sets
Grade **UndergraduateStudent::getstuRecord() { return m_studentRecord; }
void UndergraduateStudent::setstuRecord(Grade*)
{
};