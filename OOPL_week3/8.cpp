#include <iostream>
using namespace std;

int main()
{
	int* ptr, var1, var2;
	var1 = 25;
	ptr = &var1;
	var2 = *ptr;
	cout << var1 << "," << var2 << endl;
}