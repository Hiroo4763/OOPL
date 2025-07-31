#include <iostream>
using namespace std;

int main()
{
	int a = 1, sum = 0;
	while (a <= 10)
	{
		sum += a;
		a++;
	}
	cout << "1+2+3+...+10 = " << sum << endl;
}