#include "GraduateStudent.h"


GraduateStudent::GraduateStudent(std::string name, int id)
	:Student(name,id)
{}

//double check these get/sets
Grade **GraduateStudent::getstuRecord() { return m_studentRecord; }
void GraduateStudent::setstuRecord(Grade*)
{
}

GraduateStudent::~GraduateStudent() {};
void GraduateStudent::print() const {
	for (int i = 0; i < m_max_number_of_graduatecourses; i++)
	{
		std::cout << m_studentRecord[i];
	}
}