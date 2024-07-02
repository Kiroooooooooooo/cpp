#include <iostream>
using namespace std;

int main()
{
	int * p;
	int * q;
	int i = 3;
	int j = 4;
	p = &i;
	q = &j;
	cout << *p << endl;
	cout << *q << endl;
	p = q;
	cout << *p << endl;
	cout << *q << endl;
	return 0;
}