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
		cout << "ß÷ß÷" << endl;
	}
};

class Dog : public Animal
{
public:
	void say()
	{
		cout << "ÍôÍô" << endl;
	}
};

class Lion : public Animal
{
public:
	void say()
	{
		cout << "ºð......" << endl;
	}
};


class Bird : public Animal
{
public:
	void say()
	{
		cout << "ß´ß´ÔûÔû" << endl;
	}
};


void animalSay(Animal * animal)	//ÀûÓÃ¶àÌ¬µÄÒ»¸öº¯Êý
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