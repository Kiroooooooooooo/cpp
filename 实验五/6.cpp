#include <iostream>
#include <windows.h>
#include "5.cpp"
using namespace std;

int main(){
	clock c;
	c.setclock() ;
	while(true){
		c.showclock();
		c.addclock();
		Sleep(1000);
	}
	return 0;
}

