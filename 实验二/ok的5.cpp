#include <iostream>
using namespace std;
int main(){
	int i;
	float x,sum=0,a,b;
	char s=1;
	cin>>x;
	a=x;
	b=1;
	for(i=1;a/b>=1e-6;i++){
		sum=sum+s*a/b;
		a=a*x*x;
		b=b*2*i*(2*i+1);
		s*=-1;
	}
	cout<<sum;
}
