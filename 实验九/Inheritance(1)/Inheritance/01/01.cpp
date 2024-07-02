#include <iostream>
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

//***************************************************成员函数的实现

Arry::Arry(int size)
{
	pointer = new int[size];
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

int main()
{
	Arry arry(10);
	arry.add(1);
	arry.add(2);
	arry.add(3);
	arry.add(4);
	arry.outPut();
	return 0;
}