#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int hour, minute, second;
	cin >> hour >> minute >> second;
	while(true){
		system("cls");
		cout << hour << ":" << minute << ":" << second << endl;
		second = (second + 1) % 60;
		if(second == 0){
			minute = (minute + 1) % 60;
			if(minute == 0){
				hour = (hour + 1) % 24;
			}
		}
		Sleep(1000);
	}
	
	return 0;
}
