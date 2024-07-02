#include <iostream>
using namespace std;

int main()
{
	void * pointer;
	float i = 4.0;
	pointer = &i;
	cout << *(float *)pointer << endl;
	return 0;
}