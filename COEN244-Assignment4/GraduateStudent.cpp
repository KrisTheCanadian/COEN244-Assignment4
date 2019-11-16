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

bool GraduateStudent::checking_a_course(std::string coursenumber)
{
	for (int i = 0; i < m_max_number_of_graduatecourses; i++)
	{
		if (m_studentRecord[i]->getcourse().getcourseNumber() == coursenumber)
		{
			return true;
		}
	}
	return false;
}

bool GraduateStudent::register_a_course(Grade a)
{
	for (int i = 0; i < m_max_number_of_graduatecourses; i++)
	{
		if (m_studentRecord[i] == &a)
		{
			std::cout << "Student has already taken this course." << std::endl;
			return false;
		}
		else if (m_studentRecord[i] == nullptr)
		{
			for (int j = 0; j < no_of_offered_courses; j++)
			{
				if (arrayCourse[j]->getcourse().getcourseName() == a.getcourse().getcourseName())
				{
					for (int l = 0; l < m_max_number_of_graduatecourses; l++)
					{
						if (this->m_studentRecord[l]->getcourse().getcourseNumber() == arrayCourse[j]->getPrerequ())
						{
							m_studentRecord[i] = &a;
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool GraduateStudent::dropping_a_course(std::string coursenum)
{
	for (int i = 0; i < m_max_number_of_graduatecourses; i++)
	{
		if (m_studentRecord[i]->getcourse().getcourseNumber() == coursenum)
		{
			m_studentRecord[i] = nullptr;
			return true;
		}
	}
return false;
}