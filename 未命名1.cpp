#include <iostream>
using namespace std;

int main(){
    float x1,sum1,a1,b1;
    char s1=1;
    x1=1;
    a1=x1;
    b1=1;
    for(int i=1;a1/b1>=1e-6;i++){
    	sum1=sum1+s1*a1/b1;
    	a1=a1*x1*x1;
    	b1=b1*2*i*(2*i+1);
    	s1*=-1;
	}//sum1为sin(1结果 
	
	float x2,sum2,a2,b2;
    char s2=1;
    x2=3;
    a2=x2;
    b2=1;
    for(int i=1;a2/b2>=1e-6;i++){
    	sum2=sum2+s2*a2/b2;
    	a2=a2*x2*x2;
    	b2=b2*2*i*(2*i+1);
    	s2*=-1;
	}//sum2为sin(3结果 
	
	float x3,sum3,a3,b3;
    char s3=1;
    x3=5;
    a3=x3;
    b3=1;
    for(int i=1;a3/b3>=1e-6;i++){
    	sum3=sum3+s3*a3/b3;
    	a3=a3*x3*x3;
    	b3=b3*2*i*(2*i+1);
    	s3*=-1;
	}//sum3为sin(5结果 
	
	
	
	int c1,d1;
	c1=7;
	d1=4;
	int j1;
	j1=c1;
	for(int i=1;i<d1;i++){
		j1=j1*c1;
	}//j1为7的4次方
	
	int c2,d2;
	c2=2;
	d2=10;
	int j2;
	j2=c2;
	for(int i=1;i<d2;i++){
		j2=j2*c2;
	}//j2为2的10次方
	
	int e1,k1;
	e1=4;
	for(int i=1;i<=e1;i++){
		k1=k1+i;
	}
	
	
	int e2,k2;
	e1=5;
	for(int i=1;i<=e2;i++){
		k2=k2+i;
	}
	
	int g;
	g=sum1+sum2+sum3+j1+j2+k1+k2;
	cout<<g;
	return 0;
}


