#include <iostream>
using namespace std;

class A
{
public:
	void fun()
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
	A obja = objb;
	A & obja1 = objb;
	A * pobja = &objb;
	
	objb.fun();
	obja.fun();
	obja1.fun();
	pobja ->fun();
	return 0;
}