#include <iostream>
using namespace std;

int main()
{
	char * month[12] = { "January" , "February" , "March" , "April" , "May"  , "June"  , "July" , "August" , "September"  , "October" , "November" , "December"};
	int m;
	cout << "������Ҫ��ѯ���·ݣ�" << endl;
	cin >> m;
	cout << m << "�µ�Ӣ������Ϊ��" << month[m-1] << endl; 
	return 0;
}