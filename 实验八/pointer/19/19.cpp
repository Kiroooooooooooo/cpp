#include <iostream>
using namespace std;

class A
{
public:
	int i;
public:
	void outPutI();
};


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

	a.outPutI();
	p ->outPutI();

	cout << a.i << endl;
	cout << p ->i << endl;
	return 0;
}
