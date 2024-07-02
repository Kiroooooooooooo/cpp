#include <iostream>
using namespace std;
int main(){
	cout<<"请输入用户名和密码"<<endl; 
	int a;
	int b;
	cin>>a>>b;
	if(a==12345&& b==67890){
		cout<<"登录成功"<<endl;
		
    }
	else {
	    cout<<"登录失败"<<endl;
		} 
	
	return 0;
} 
