
#include "Date.h"

TDate::TDate() {}
TDate::TDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}
int TDate::GetDay() const
{
	return this->day;
}
int TDate::GetMonth() const
{
	return this->month;
}
int TDate::GetYear() const
{
	return this->year;
}
void TDate::SetDay(int day)
{
	if ((day > 31)||(day<1)) {
		throw std::exception("Wrong day");
	}
	this->day = day;
}
void TDate::SetMonth(int month)
{
	if ((month > 12) || (month < 1)) {
		throw std::exception("Wrong month");
	}
	this->month = month;
}
void TDate::SetYear(int year)
{
	this->year = year;
}