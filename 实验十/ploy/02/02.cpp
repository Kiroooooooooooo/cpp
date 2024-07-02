#include <iostream>
using namespace std;

class A
{
public:
	int a;
public:
	A()
	{
		a = 0;
	}	
public:
	int getA()
	{
		return a;
	}	
};


class B : public A
{
public:
	int b;
public:
	B()
	{
		b = 1;
	}
public:
	int getB()
	{
		return b;
	}
};

int main()
{
	B objb;
	cout << objb.a << endl;
	cout << objb.b << endl;
	cout << objb.getA() << endl;
	cout << objb.getB() << endl;

	A & obja = objb;
	cout << obja.a << endl;
	cout << obja.getA() << endl;
	return 0;
}