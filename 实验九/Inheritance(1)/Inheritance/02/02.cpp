#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

//***************************************************类的声明

class Arry
{
protected:
	int * pointer;
	int size;
	int num;
public:
	Arry(int size);
	bool add(int x);
	void outPut();
};

//***************************************************类的实现

Arry::Arry(int size)
{
	pointer = new int[size];
	memset(pointer,0,4 * size);
	num = 0;
}

bool Arry::add(int x)
{
	if(num == size)return false;
	pointer[num] = x;
	num ++;
	return true;
}

void Arry::outPut()
{
	for(int i = 0; i < num; i ++)
	{
		cout << pointer[i] << " ";
	}
	cout << endl;
}

//***************************************************主函数

void fun()
{
	Arry arry(50*1024*1024);
}

int main()
{
	while(1)
	{
		fun();
		Sleep(1000);
	}
	return 0;
}