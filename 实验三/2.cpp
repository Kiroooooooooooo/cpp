#include <iostream>
using namespace std;
int fibonacci(int a){
	int f1=1,f2=1,f3;
	if(a<=2)
	    return 1;
	else{
		for(int i=3;i<=a;i++){
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
	return f3;
	}
}

int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n)<<"="<<fibonacci(n-1)<<"+"<<fibonacci(n-2)<<endl;
	return 0;
}
