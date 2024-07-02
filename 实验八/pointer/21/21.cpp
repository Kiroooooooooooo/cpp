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

	year = year;
	month = month;
	day = day;
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