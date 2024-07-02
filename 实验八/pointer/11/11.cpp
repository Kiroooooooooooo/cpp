#include <iostream>
using namespace std;

int main()
{
	int * pointer;
	int arry[] = {1 , 2 , 3, 4, 5, 6};
	pointer = arry;
	cout << *pointer << endl;
	pointer ++;
	cout << *pointer << endl;
	return 0;
}