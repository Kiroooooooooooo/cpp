#include <iostream>
using namespace std;

//***********************************************Person��
class Person
{
public:
	char * name;
	int age;
};


//***********************************************Teacher��
class Teacher : public Person
{
public:
	char * major;
	char * profession;
};


//***********************************************Student��
class Student : public Person
{
public:
	char * ID;
	char * classes;
};


//***********************************************������
int main()
{
	Teacher t1;
	Student s1;

	t1.name = "����ʦ";
	t1.age = 35;
	t1.major = "�������ѧ�뼼��";
	t1.profession = "������";

	s1.name = "��ͬѧ";
	s1.age = 19;
	s1.ID = "0101";
	s1.classes = "01";

	cout << "��ʦ����:" << t1.name << endl;
	cout << "��ʦ����:" << t1.age << endl;
	cout << "��ʦרҵ:" << t1.major << endl;
	cout << "��ʦְ��:" << t1.profession << endl;

	cout << "ѧ������:" << s1.name << endl;
	cout << "ѧ������:" << s1.age << endl;
	cout << "ѧ��ѧ��:" << s1.ID << endl;
	cout << "ѧ���༶:" << s1.classes << endl;
	return 0;
}