#include <iostream>
using namespace std;

int sinn(int x){
    float sum,a,b;
    char s=1;
    a=x;
    b=1;
    for(int i=1;a/b>=1e-6;i++){
    	sum=sum+s*a/b;
    	a=a*x*x;
    	b=b*2*i*(2*i+1);
    	s*=-1;
	}
	return sum; 
}
	
	
	
int f(int c,int d){
	int j;
	j=c;
	for(int i=1;i<d;i++){
		j=j*c;
	}
	return j;
}

unsigned int fac( unsigned int x ){
	if(x == 0){
		return 1;
	}
	unsigned int result = 1;
	while(x != 1){
		result = result * x;
		x = x - 1;
	}
	return result;
}	

int main(){
	int g;
	g=f(7,4)+sinn(1)+fac(4)+sinn(3)+f(2,10)+fac(5)+sinn(5);
	cout<<g;
	return 0;
}


