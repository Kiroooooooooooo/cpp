#ifndef CLOCK_H
#define CLOCK_H
#include <iostream>
#include <windows.h>
using namespace std;

class clock{
	public:
		int h,m,s;
		void setclock();
		void showclock();
		void addclock();
}; 

#endif
