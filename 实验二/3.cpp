#include <iostream>
using namespace std;
int main(){
    	int x,n;
    	cin>>x>>n;
    	int sum;
    	sum=x;
    	for(int i=1;i<n;i++){
    		sum=sum*x;
		}
		cout<<sum;
	return 0;
} 
