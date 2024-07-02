#include <iostream>
using namespace std;
int main(){
    int y,m,d;
    cin>>y>>m>>d;
    if((y%4==0&&y%100!=0)||(y%400==0)){
	    if(m==1){cout<<d;}
		if(m==2){cout<<d+31;}
		if(m==3){cout<<d+60;}
		if(m==4){cout<<d+91;}
		if(m==5){cout<<d+121;}
		if(m==6){cout<<d+152;}
		if(m==7){cout<<d+182;}
		if(m==8){cout<<d+213;}
		if(m==9){cout<<d+244;}
		if(m==10){cout<<d+274;}
		if(m==11){cout<<d+305;}
		if(m==12){cout<<d+335;}									
	}
	else{
	    if(m==1){cout<<d;}
		if(m==2){cout<<d+31;}
		if(m==3){cout<<d+59;}
		if(m==4){cout<<d+90;}
		if(m==5){cout<<d+120;}
		if(m==6){cout<<d+151;}
		if(m==7){cout<<d+181;}
		if(m==8){cout<<d+212;}
		if(m==9){cout<<d+243;}
		if(m==10){cout<<d+273;}
		if(m==11){cout<<d+304;}
		if(m==12){cout<<d+334;}			
	}
} 
