#pragma once
#include <string>
#include "Course.h"

//Class CourseRegistration inherits from the Course class. Each object of this class stores the student-ids of the students registered to a course

class CourseRegistration :
	public Course
{
public:
	CourseRegistration(Course);
	int *getregisteredCourse();
	int getno_of_students() const;
	void setno_of_students(int);
	int get_class_max();
	//Register a student to a course
	bool register_a_course(int); //student id

	//Drop a student registered to a course
	bool dropping_a_course(int); //student id
	void print(); //prints course name and number and the student-id of registered students
private:
	static const int m_classSize = 60; //ALL OBJECTS OF THE CLASS CourseRegistration has a maximum of 60
	int m_registeredtoCourse[m_classSize]; //this array stores the student-ids of the students registered to this course
	int m_no_of_registeredStudents;
};

