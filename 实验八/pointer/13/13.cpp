#include <iostream>
using namespace std;

int main()
{
	int num = 65536 * 65 + 256 * 66 + 67;//00410000+00004200+43 �洢ʱΪ43424100 
	char * pointer = (char *)&num;
	cout << pointer[0] << endl;
	cout << *(++ pointer) << endl;
	cout << (pointer + 1)[0] << endl;
	return 0;
}
