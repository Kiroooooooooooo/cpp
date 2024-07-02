#include <iostream>
using namespace std;

class A
{
public:
	int i;
	void outPutI();
	A * getAddress();

};


A * A::getAddress()
{
	return this;
}

void A::outPutI()
{
	cout << i << endl;
}

int main()
{
	A a;
	a.i = 1;
	A * p;
	p = &a;

	cout << &a << endl;
    cout << p << endl;
	cout << &a.i << endl;
	cout << a.getAddress() << endl;
	return 0;
}
