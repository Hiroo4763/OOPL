#include <iostream>
using namespace std;

int main()
{
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = &array[5];

	cout << "p = " << p << endl;
	cout << "&array[5] = " << &array[5] << endl;
	p++; // �ڷ����� Ÿ�Ը��� ����Ʈ ���� ��, 4����Ʈ ����
	cout << "p = " << p << endl;
	cout << "&array[6] = " << &array[6] << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;

	}
	cout << p << endl;
	cout << *p++ << endl; // arr[6]�� cout �ϰ� p�� 7�� ��
	cout << p << endl;
	(*p)++; // arr[7]�� ���� 8���� 9�� ����
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
}