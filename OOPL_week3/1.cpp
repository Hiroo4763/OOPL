#include <iostream>
using namespace std;

int main()
{
	char flag;
	cin >> flag;
	switch (flag)
	{
	case 'k':
		cout << "�ѱ� ȭ����\n";
		break; // break ������ �ȵ�
	case 'm':
		cout << "������ ���� ����!\n";
		break;
	default:
		cout << "�ȳ��� ������\n";
	}
	cout << "��\n";

}