#include <iostream>
using namespace std;

int main()
{
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = &array[5];

	cout << "p = " << p << endl;
	cout << "&array[5] = " << &array[5] << endl;
	p++;
	cout << "p = " << p << endl;
	cout << "&array[6] = " << &array[6] << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;

	}
	cout << *p++ << endl;
	(*p)++;
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
}