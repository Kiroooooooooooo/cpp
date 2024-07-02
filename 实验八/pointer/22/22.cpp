#include <iostream>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int year , int month , int day);

	void outputDate();
};

Date::Date(int year , int month , int day)
{
	this ->year = year;
	this ->month = month;
	this ->day = day;
}

void Date::outputDate()
{
	cout << year << "Äê" << month << "ÔÂ" << day << "ÈÕ" << endl;
}



int main()
{
	Date date(1999 , 12 , 20);
	date.outputDate();
	return 0;
}