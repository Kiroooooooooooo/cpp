#include <iostream>
using namespace std;

int main()
{
	void * pointer;
	float i = 4.0;
	pointer = &i;
	cout << *pointer << endl;
	return 0;
}