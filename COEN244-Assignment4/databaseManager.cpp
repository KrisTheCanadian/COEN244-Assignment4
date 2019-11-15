#include "databaseManager.h"

databaseManager::databaseManager()
{
	for (Student* stuptr : m_array_student) {stuptr = nullptr;}
	for (Course* couptr : m_arrayCourse) { couptr = nullptr; }
}

bool databaseManager::insert(Student* stu)
{
	for (int i = 0; i < m_max_no_of_students; i++)
	{
		if (m_array_student[i] != stu)
		{
			if (m_array_student[i] == nullptr)
			{
				m_array_student[i] = stu;
				return true;
			}
		}
	}
	return false;
};
	
bool databaseManager::deleter(int stuID)
{
	for (int i = 0; i < m_max_no_of_students; i++) {
		if (m_array_student[i] != nullptr) {
			if (m_array_student[i]->getstudID() == stuID) {
				m_array_student[i] = nullptr;
				return true;
			}
		}
	}
	return false;
};

bool databaseManager::registering_to_Course(int id, std::string course)
{
	for (int i = 0; i < m_no_of_offered_courses; i++)
	{
		if (m_arrayCourse[i]->getcourseNumber() == course)
		{
			m_arrayCourse[i]->register_a_course(id);
		}
	}
};

bool databaseManager::dropping_a_Course(int id, std::string course)
{
	for (int i = 0; i < m_no_of_offered_courses; i++)
	{
		if (m_arrayCourse[i]->getcourseNumber() == course)
		{
			m_arrayCourse[i]->dropping_a_course(id);
		}
	}
};

void databaseManager::print(int studentid)
{
	for (Student* stuptr : m_array_student) 
	{ 
		if (stuptr != nullptr) 
		{ 
			if (stuptr->getstudID() == studentid) 
			{ 
				stuptr->print(); 
			} 
		} 
	}
	for (CourseRegistration* course_req_ptr : m_arrayCourse) {
		if (course_req_ptr != nullptr) {
			for (int stuID : course_req_ptr->getregisteredCourse) {
				if (studentid == stuID) {
					course_req_ptr->print();	//might have to print it as a Course instead of courseRegistration
				}
			}
		}
	}

}

void databaseManager::print(std::string course) 
{
	for (CourseRegistration* course_req_ptr : m_arrayCourse) {
		if (course_req_ptr != nullptr) {
			if (course_req_ptr->getcourseName() == course)
			{
				for (int studentID : course_req_ptr->getregisteredCourse)
				{
					for (Student* stuptr : m_array_student) 
					{
						if (stuptr != nullptr) 
						{
							if (stuptr->getstudID() == studentID) {
								stuptr->print(); // I printed more info.
							}
						}

					}
				}
			}
		}
	}
}