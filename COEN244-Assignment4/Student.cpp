#include "Student.h"
Student::Student(std::string name, int id)
	:m_studentName(name), m_studentId(id)
{
	for (int i = 0; i < this->no_of_offered_courses; i++) {
		arrayCourse[i] = nullptr;
	}
}
std::string Student::getstuName() const { return m_studentName; };
void Student::setstuName(std::string name) { m_studentName = name; };
int Student::getstudID() const { return m_studentId; };
void Student::setstudID(int id) { m_studentId = id; }
bool Student::checking_a_course(std::string){return false;}
bool Student::register_a_course(Grade){return false;}
bool Student::dropping_a_course(std::string){return false;}
void Student::print(){std::cout << "Student" << std::endl;}