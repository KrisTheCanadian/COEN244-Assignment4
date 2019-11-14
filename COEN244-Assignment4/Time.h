#pragma once
#include <iostream>

//using namespace std;

class Time
{
public:
	Time();
	Time(int, int);
	int gethour() const;
	void sethour(int);
	int getday() const;
	void setday(int);
	//Overload the equality operator to test if two Time objects are same
	bool operator == (Time&);
	// Overload the insertion operator to output hour and day data member values.
	friend std::ostream operator << (std::ostream&, Time&);
private:
	int m_hour;
	int m_day;
};

