#include <iostream>
using namespace std;

int main()
{
	int * pointer;
	float i = 4.0;
	pointer = (int *)&i;	
	cout << *pointer << endl;
	return 0;
}