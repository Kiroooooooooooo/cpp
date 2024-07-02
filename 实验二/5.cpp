#include <iostream>
using namespace std;

int cf(int a,int b){
    int sum;
    for(int i=1;i<=b;i++){
    	sum=sum*a;
	}
	return sum;
}

/*int jc(int c){
	int j;
	for(int i=1;i<=c;i++){
		j=j*i;
	}
}*/

int main(){
	float sin;
	int x;
	cin>>x;
	sin=x-cf(x,3)/6+cf(x,5)/120-cf(x,7)/5040;
	cout<<sin;
    return 0;
} 
