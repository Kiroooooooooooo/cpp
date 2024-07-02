#include <iostream>
#include <windows.h>
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
	~Arry();
	bool add(int x);
	void outPut();
};

//***************************************************��Ա������ʵ��

Arry::Arry(int size)
{
	pointer = new int[size];
	memset(pointer,0,4 * size);
	num = 0;
}

Arry::~Arry()
{
	delete [] pointer;
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

int main()
{
	Arry arry_1(10);
	Arry arry_2(arry_1);
	return 0;
}