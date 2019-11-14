#pragma once
#include <string>
#include "Course.h"
#include "Time.h"

//Each course has one pre-requisite course and it has two lectures per week. The lectures start on the hour and lasts 50 minutes.
//An example course scheule may be: 
//Monday 2.00pm, Wednesday 4.00pm. Two courses that start on the same day at the same time will conflict with each other.

class CourseSchedule
{
public:
	//In the constructor, the parameters are used to inialize Course object, course prerequisite and couse weekly schedule
	CourseSchedule(Course, std::string, Time, Time);
	Course getcourse() const;
	void setcourse(Course);
	std::string getPrerequ() const;
	void setPrerequ(std::string);
	Time gettime1() const;
	void settime1(Time);
	Time gettime2() const;
	void settime2(Time);
	virtual void print(); //prints all the data member values.
	~CourseSchedule();
private:
	Course m_course; //An object of the Course class
	std::string m_coursePrerequisite; //This is the course number of the pre-requisite course, example "COEN243"
	Time m_time1; //day and hour of the first lecture
	Time m_time2; //day and hour of the second lecture
};

