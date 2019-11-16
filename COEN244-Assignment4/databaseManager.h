#pragma once
#include <string>
#include "Student.h"
#include "CourseRegistration.h"
#include <algorithm>

//The following class manages registration of the students to the courses and stores student records

class databaseManager
{
public:
	databaseManager();

	//insert function adds a new student to the array-student
	bool insert(Student*);

	//delete function removes a student from the array_student with the given student id number
	bool deleter(int); //student_id

	//Register a student with the given student_id parameter to the course with the given course number
	bool registering_to_Course(int, Grade);

	//Remove registration of a student with the given student-id parameter and the course number
	bool dropping_a_Course(int, std::string);

	//Print name, student-id and student record of a student with the given student-id
	virtual void print(int);

	//Prints student ids of all the students taking a course with the given course number
	virtual void print(std::string);
private:
	static const int m_max_no_of_students = 5000;
	static const int m_no_of_offered_courses = 400;
	int m_no_of_students_enrolled; //number of the students at the university
	//The following array stores information about the students
	Student* m_array_student[m_max_no_of_students];
	//The following array stores course registration information about all the offered courses
	CourseRegistration* m_arrayCourse[m_no_of_offered_courses];
};

