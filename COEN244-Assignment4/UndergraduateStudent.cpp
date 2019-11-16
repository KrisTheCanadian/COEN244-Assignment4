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
	for (int i = 0; i < m_max_no_of_courses; i++)
	{
		if (m_studentRecord[i]->getcourse().getcourseNumber() == coursenumber)
		{
			return true;
		}
	}
	return false;
}

bool UndergraduateStudent::register_a_course(Grade a)
{
	for (int i = 0; i < m_max_no_of_courses; i++)
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
					for (int l = 0; l < m_max_no_of_courses; l++)
					{
						if (m_studentRecord[l]->getcourse().getcourseNumber() == arrayCourse[j]->getPrerequ())
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

bool UndergraduateStudent::dropping_a_course(std::string coursenum)
{
	for (int i = 0; i < m_max_no_of_courses; i++)
	{
		if (m_studentRecord[i]->getcourse().getcourseNumber() == coursenum)
		{
			m_studentRecord[i] = nullptr;
			return true;
		}
	}
	return false;
}