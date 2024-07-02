#include <iostream>
using namespace std;

//***********************************************Person类
class Person
{
public:
	char * name;
	int age;
};


//***********************************************Teacher类
class Teacher : public Person
{
public:
	char * major;
	char * profession;
};


//***********************************************Student类
class Student : public Person
{
public:
	char * ID;
	char * classes;
};


//***********************************************主函数
int main()
{
	Teacher t1;
	Student s1;

	t1.name = "赵老师";
	t1.age = 35;
	t1.major = "计算机科学与技术";
	t1.profession = "副教授";

	s1.name = "李同学";
	s1.age = 19;
	s1.ID = "0101";
	s1.classes = "01";

	cout << "教师姓名:" << t1.name << endl;
	cout << "教师年龄:" << t1.age << endl;
	cout << "教师专业:" << t1.major << endl;
	cout << "教师职称:" << t1.profession << endl;

	cout << "学生姓名:" << s1.name << endl;
	cout << "学生年龄:" << s1.age << endl;
	cout << "学生学号:" << s1.ID << endl;
	cout << "学生班级:" << s1.classes << endl;
	return 0;
}