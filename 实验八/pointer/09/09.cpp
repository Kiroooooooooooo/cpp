#include <iostream>
using namespace std;

int main()
{
	int i = 65535;//0000FFFF
	int * pointer = &i;
	char * q = (char * )pointer + 1;// pointer��ΪFF charֻ��1�ֽڣ���qΪ00FF 
	cout << *(short int *)pointer << endl;//FFFFΪ-1�Ĳ��� 
	cout << *(short int *)q << endl;//00FF 255 
	return 0;
}
