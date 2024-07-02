#include <iostream>
using namespace std;

int main()
{
	char a[6] = {'H','e','l','l','o','\0'};
	char * p = a;
	char * q = &a[0];
	char * r = "Hello";
	cout << a << endl;
	cout << &a[0] << endl;
	cout << p << endl;
	cout << q << endl;
	cout << r << endl;
	cout << "Hello" << endl;
	cout << "****************************************" << endl;
	cout << (p == q) << endl;
	cout << (p == r) << endl;
	cout << (q == r) << endl;
	cout << (p == "Hello") << endl;
	cout << (q == "Hello") << endl;
	cout << (r == "Hello") << endl;
	cout << (r == "Helloworld") << endl;
	return 0;
}
