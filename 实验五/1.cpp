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

void clock::setclock(){
	cin>>h>>m>>s;
}

void clock::showclock(){
	system("cls");
	cout<<h<<":"<<m<<":"<<s<<endl;
}

void clock::addclock(){
	s=(s+1)%60;
	if(s==0){
		m=(m+1)%60;
		if(m==0){
		    h=(h+1)%24;	
	    }
	}
	
}
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
