#include <iostream>
using namespace std;

// 返回值的数据类型  函数名称 ( 参数类型 参数名称 ,  参数类型 参数名称，...);

unsigned int fac( unsigned int x );

int main(){
	cout << fac(4) + fac(5) + fac(0)<< endl;
	return 0;
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