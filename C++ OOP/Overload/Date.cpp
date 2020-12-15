#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	_day = 1;
	_month = 1;
	_year = 1;
}

Date::Date(int day, int month, int year)
{
	_day = day;
	_month = month;
	_year = year;
}

Date Date::operator-(const Date& minus)
{
	int days = this->_day - minus._day;
	int months = _month - minus._month;
	int years = _year - minus._year;
	return Date(days, months, years);
}

Date Date::operator+(int a)
{
	int days = _day + (a % 365) % 30;
	int months = _month + (a % 365) / 30;
	int years = _year + a / 365;
	return Date(days, months, years);
}

void Date::Show()
{
	std::cout << "Date: " << this->_day << '.' << _month << '.' << _year << std::endl;
}

Date::~Date()
{
}
