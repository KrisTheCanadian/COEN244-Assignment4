#include "Student.h"


std::string Student::getstuName() const { return m_studentName; };
void Student::setstuName(std::string name) { m_studentName = name; };
int Student::getstudID() const { return m_studentId; };
void Student::setstudID(int id) { m_studentId = id; };