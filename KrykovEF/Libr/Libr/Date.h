#pragma once

#include <iostream>

class TDate
{
private:
	int day;
	int month;
	int year;
public:
	TDate();
	TDate(int day, int month, int year);
	int GetDay() const;
	int GetMonth() const;
	int GetYear() const;
	void SetDay(int);
	void SetMonth(int);
	void SetYear(int);

	friend std::ostream& operator<<(std::ostream& out, const TDate& date)
	{
		out << date.day << "." <<
			date.month << "." << date.day << std::endl;
		return out;
	}
};
