#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str1[] = {'H','e','l','l','o','\0'};
	cout << strlen(str1) << endl;
	strlwr(str1);
	cout << str1 << endl;
	strupr(str1);
	cout << str1 << endl;
	char str2[10];
	strcpy( str2, str1);
	cout << str2 << endl;
	strcat(str2,str1);
	cout << str2 << endl;
	return 0;
}