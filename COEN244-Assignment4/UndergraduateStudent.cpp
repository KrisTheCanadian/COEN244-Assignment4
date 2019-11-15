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
UndergraduateStudent::~UndergraduateStudent(){}

bool UndergraduateStudent::checking_a_course(std::string coursenumber) 
{
	for(int i=0; i < m_max_no_of_courses)
}