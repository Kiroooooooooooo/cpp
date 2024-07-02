#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

//***************************************************�������

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

//***************************************************���ʵ��

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

//***************************************************������

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