#include <iostream>
using namespace std;

int main()
{
	char * month[12] = { "January" , "February" , "March" , "April" , "May"  , "June"  , "July" , "August" , "September"  , "October" , "November" , "December"};
	int m;
	cout << "请输入要查询的月份：" << endl;
	cin >> m;
	cout << m << "月的英文月名为：" << month[m-1] << endl; 
	return 0;
}