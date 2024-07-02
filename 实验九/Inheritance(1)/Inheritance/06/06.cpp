#include <iostream>
using namespace std;

//***********************************************基类
class A
{
public:
	int a;
	int b;
public:
	A();
};

A::A()
{
	cout << "A类构造函数被调用" << endl;
}

//***********************************************派生类
class B : public A
{
public:
	int c;
	int d;
public:
	B();
};

B::B()
{
	cout << "B类构造函数被调用" << endl;
}

int main()
{
	B objb;
	return 0;
}