#include <iostream>
using namespace std;

int fact(int x)
{
	int result = 1;
	while(x)
	{
		result *= x;
		x --;
	}
	return result;
}

int main()
{
	int (* p) (int x);
	p = fact;
	cout << fact(5) << endl;
	cout << p(6) << endl;
	return 0;
}