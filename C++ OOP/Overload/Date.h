#pragma once

class Date
{
private:
	int _day;
	int _month;
	int _year;

public:
	Date();
	Date(int day = 1, int month = 1, int year = 1);

	Date operator-(const Date& minus);
	Date operator+(int plus);


	void Show();

	~Date();
};
