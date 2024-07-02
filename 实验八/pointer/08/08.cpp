#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	short int j = 1;
	int * p = &i;
	short int * q = &j;//2×Ö½Ú 
	cout << p ++ << endl; 
	cout << p << endl;
	cout << q ++ << endl;
	cout << q << endl;
	return 0;
}
