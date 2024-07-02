#include <iostream>
using namespace std;

char * fun()
{
	char * i = "HelloWorld!";
	return i;
}

int main()
{
	cout << fun() << endl;
	return 0;
}