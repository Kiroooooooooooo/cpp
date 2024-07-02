#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

void fun()
{
	//动态创建一个数组
	int * a = new int[50*1024*1024];

	//将数组所有元素的值初始化为0
	memset(a,0,4*50*1024*1024);
	
	delete [] a;
}

int main()
{
	while(1)
	{
		::Sleep(1000);
		fun();
	}
	return 0;
}