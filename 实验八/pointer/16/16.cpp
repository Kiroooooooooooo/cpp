#include <iostream>
using namespace std;

void fun(int * i)
{
	*i = 2;
}

int main()
{
	int i = 1;
	cout << i << endl;
	fun(&i);
	cout << i << endl;
	return 0;
}