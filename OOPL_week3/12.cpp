#include <iostream>
using namespace std;

int main()
{
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = &array[5];

	cout << "p = " << p << endl;
	cout << "&array[5] = " << &array[5] << endl;
	p++; // 자료형의 타입만금 바이트 증가 즉, 4바이트 증가
	cout << "p = " << p << endl;
	cout << "&array[6] = " << &array[6] << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;

	}
	cout << p << endl;
	cout << *p++ << endl; // arr[6]을 cout 하고 p가 7이 됨
	cout << p << endl;
	(*p)++; // arr[7]의 값이 8에서 9로 증가
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
}