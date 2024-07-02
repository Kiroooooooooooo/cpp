#include <iostream>
using namespace std;

class A
{
public:
	virtual void fun()
	{
		cout << "我是类A的fun函数" << endl;
	}
	
};


class B : public A
{
public:
	void fun()
	{
		cout << "我是类B的fun函数" << endl;
	}
};

int main()
{
	B objb;
	A obja = objb;		//对象切片
	A & obja1 = objb;	//基类引用指向派生类
	A * pobja = &objb;	//基类指针指向派生类
	
	objb.fun();
	obja.fun();
	obja1.fun();
	pobja ->fun();
	return 0;
}