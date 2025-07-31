#include <iostream>
using namespace std;

inline int odd(int x)
{
	return x % 2;
}

int main()
{
	
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		if (odd(i))
			sum += i;
	}
}