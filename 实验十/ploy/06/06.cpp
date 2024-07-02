#include <iostream>
using namespace std;

class Animal
{
public:

	virtual void say() = 0;
};

class Cat : public Animal
{
public:
	void say()
	{
		cout << "����" << endl;
	}
};

class Dog : public Animal
{
public:
	void say()
	{
		cout << "����" << endl;
	}
};

class Lion : public Animal
{
public:
	void say()
	{
		cout << "��......" << endl;
	}
};


class Bird : public Animal
{
public:
	void say()
	{
		cout << "ߴߴ����" << endl;
	}
};


void animalSay(Animal * animal)	//���ö�̬��һ������
{
	animal ->say();
}

int main()
{
	
	Cat cat;
	Dog dog;
	Lion lion;
	Bird bird;

	animalSay(&cat);
	animalSay(&dog);
	animalSay(&lion);
	animalSay(&bird);
	return 0;
}