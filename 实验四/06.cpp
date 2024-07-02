#include <iostream>
#include <windows.h>
using namespace std;

struct Clock{
	int hour;
	int minute;
	int second;
};

void setClock(Clock &c){
	cin >> c.hour >> c.minute >> c.second;
}

void addClock(Clock &c){
	c.second = (c.second + 1) % 60;
	if(c.second == 0){
		c.minute = (c.minute + 1) % 60;
		if(c.minute == 0){
			c.hour = (c.hour + 1) % 24;
		}
	}
}

void showClock(Clock c){
	system("cls");
	cout << c.hour << ":" << c.minute << ":" << c.second << endl;
}
int main(){
	Clock c;
	setClock( c );
	while(true){
		showClock( c );
		addClock( c );
		Sleep(1000);
	}
	return 0;
}

