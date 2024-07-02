#include <iostream>
using namespace std;

int main()
{
	int * pointer;				
	int i = 4;
	pointer = &i;				
	cout << &i << endl;
	cout << pointer << endl;
	cout << i << endl;
	cout << *pointer << endl;
	i ++;
	cout << *pointer << endl;
	*pointer ++;
	cout << i << endl;
	return 0;
}