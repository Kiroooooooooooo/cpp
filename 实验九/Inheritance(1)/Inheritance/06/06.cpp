#include <iostream>
using namespace std;

//***********************************************����
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
	cout << "A�๹�캯��������" << endl;
}

//***********************************************������
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
	cout << "B�๹�캯��������" << endl;
}

int main()
{
	B objb;
	return 0;
}