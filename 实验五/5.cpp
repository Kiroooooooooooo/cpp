#include <iostream>
#include <windows.h>
#include "4.cpp"
using namespace std;

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
