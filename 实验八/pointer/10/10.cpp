#include <iostream>
using namespace std;

int main()
{
	int * pointer_1;
	int * pointer_2;
	int arry[] = {1 , 2 , 3, 4, 5, 6};
	pointer_1 = arry;//数组名就是首字符 
	pointer_2 = &arry[0];

	
	cout << arry[0] << endl;
	cout << pointer_1[0] << endl;
	cout << pointer_2[0] << endl;
	cout << *pointer_1 << endl;
	cout << *pointer_2 << endl;
	
	cout << "**********************************************************************" << endl;

	
	cout << arry[1] << endl;
	cout << pointer_1[1] << endl;
	cout << pointer_2[1] << endl;
	cout << *(pointer_1 + 1) << endl;
	cout << *(pointer_2 + 1) << endl;
	return 0;
}
