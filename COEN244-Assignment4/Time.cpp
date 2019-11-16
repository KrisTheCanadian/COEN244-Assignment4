#include "Time.h"
Time::Time()
	:m_day(-1), m_hour(-1)
{}
Time::Time(int day, int hour)
	: m_day(day), m_hour(hour)
{}
bool Time::operator==(const Time& other) const {

	return (this->m_day == other.getday() && this->m_hour == other.gethour());
}
std::ostream& operator<<(std::ostream& out, const Time& time)
{
	out << " Day: " << time.getday() << " Hour: " << time.gethour();
	return out;
}
int Time::gethour() const { return m_hour; }
void Time::sethour(int h) { m_hour = h; }
int Time::getday() const { return m_day; }
void Time::setday(int d) { m_day = d; }


