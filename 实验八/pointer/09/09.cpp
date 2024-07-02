#include <iostream>
using namespace std;

int main()
{
	int i = 65535;//0000FFFF
	int * pointer = &i;
	char * q = (char * )pointer + 1;// pointer存为FF char只有1字节，故q为00FF 
	cout << *(short int *)pointer << endl;//FFFF为-1的补码 
	cout << *(short int *)q << endl;//00FF 255 
	return 0;
}
