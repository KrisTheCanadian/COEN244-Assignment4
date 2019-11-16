#include <iostream>
#include "Course.h"
#include "CourseRegistration.h"
#include "CourseSchedule.h"
#include "databaseManager.h"
#include "Grade.h"
#include "GraduateStudent.h"
#include "Student.h"
#include "Time.h"
#include "UndergraduateStudent.h"
void test() 
{
	Course* course1 = new Course("COEN 244", "Programming 2");
	Course* course2 = new Course("ELEC 273", "Circuits");
	Course* course3 = new Course("COEN 231", "Discrete");
	Course* course4 = new Course("ENGR 213", "Math 1");

	GraduateStudent* graduatestudent1 = new GraduateStudent("Moo", 313);
	GraduateStudent* graduatestudent2 = new GraduateStudent("Boo", 314);
	GraduateStudent* graduatestudent3 = new GraduateStudent("Loo", 315);
	GraduateStudent* graduatestudent4 = new GraduateStudent("Foo", 316);
	GraduateStudent* graduatestudent5 = new GraduateStudent("Roo", 317);

	UndergraduateStudent* undergraduatestudent1 = new UndergraduateStudent("Stoo", 101);
	UndergraduateStudent* undergraduatestudent2 = new UndergraduateStudent("Coo", 102);
	UndergraduateStudent* undergraduatestudent3 = new UndergraduateStudent("Noo", 103);
	UndergraduateStudent* undergraduatestudent4 = new UndergraduateStudent("Voo", 104);
	UndergraduateStudent* undergraduatestudent5 = new UndergraduateStudent("Doo", 105);

	Time* t1 = new Time(1,1);
	Time* t2 = new Time(2, 1);
	Time* t3 = new Time(1, 2);
	Time* t4 = new Time(3, 3);
	Time* t5 = new Time(3, 2);
	Time* t6 = new Time(5, 5);
	Time* t7 = new Time(6, 6);

	CourseRegistration* coursereg1 = new CourseRegistration(*course1);
	CourseRegistration* coursereg2 = new CourseRegistration(*course2);
	CourseRegistration* coursereg3 = new CourseRegistration(*course3);
	CourseRegistration* coursereg4 = new CourseRegistration(*course4);

	CourseSchedule* courseschedule1 = new CourseSchedule(*course1, (std::string)"ELEC 273", *t1, *t2);
	CourseSchedule* courseschedule1 = new CourseSchedule(*course2, (std::string)"COEN 231", *t3, *t4);
	CourseSchedule* courseschedule1 = new CourseSchedule(*course3, (std::string)"ENGR 213", *t1, *t2);
	CourseSchedule* courseschedule1 = new CourseSchedule(*course4, (std::string)"COEN 244", *t1, *t2);

	databaseManager* d1 = new databaseManager();

	

	
	
	//deleting courses
	delete course1;
	delete course2;
	delete course3;
	delete course4;

	//deleting graduatestudents
	delete graduatestudent1;
	delete graduatestudent2;
	delete graduatestudent3;
	delete graduatestudent4;
	delete graduatestudent5;

	//deleting undergraduatestudents
	delete undergraduatestudent1;
	delete undergraduatestudent2;
	delete undergraduatestudent3;
	delete undergraduatestudent4;
	delete undergraduatestudent5;

	//deleting times
	delete t1;
	delete t2;
	delete t3;
	delete t4;
	delete t5;
	delete t6;
	delete t7;
	
	//delete course registrations
	delete coursereg1;
	delete coursereg2;
	delete coursereg3;
	delete coursereg4;

	//delete database manager
	delete d1;
}
int main() {

	test();

} 
