#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int hour, minute, second;
	cin >> hour >> minute >> second;
	while(true){
		cout << hour << ":" << minute << ":" << second << endl;
		second = second + 1;
		Sleep(1000);
	}
	
	return 0;
}