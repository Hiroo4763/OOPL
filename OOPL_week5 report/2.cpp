#include <iostream>
#include <string>
using namespace std;

class Person {
	string name; // �̸� ����
	string tel; // ��ȭ��ȣ ����
public:
	Person(); // �⺻ ������
	string getName() // �̸� ��ȯ �Լ�
	{
		return name;
	}
	string getTel() // ��ȭ��ȣ ��ȯ �Լ�
	{
		return tel;
	}
	void set(string name, string tel); // �̸�, ��ȭ��ȣ ���� �Լ�
};

Person::Person() // �⺻ ������
{
	
}

void Person::set(string name, string tel) // �Ű������� ���� �̸�, ��ȭ��ȣ ��� ������ ����
{
	this->name = name;
	this->tel = tel;
}

int main()
{
	Person person[3]; // ��ü 3�� ����
	string name_input, tel_input, name_search; // �ʿ��� ���� ����
	
	cout << "�̸��� ��ȭ ��ȣ�� �Է����ּ���\n"; 
	for (int i = 0; i < 3; i++) // �̸�, ��ȭ��ȣ�� �Է¹޴� �ݺ���
	{
		cout << "��� " << i + 1 << " >> ";
		cin >> name_input >> tel_input;
		person[i].set(name_input, tel_input); 
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) // ��� ����� �̸� ���
	{
		cout << person[i].getName() << " ";
	}

	cout << "\n��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ��� >>"; 
	cin >> name_search; // �̸��� �Է¹���
	for (int i = 0; i < 3; i++) // �̸��� ��ġ�ϴ� ��ü�� ã�� ��ȭ��ȣ ���
	{
		if (name_search == person[i].getName())
		{
			cout << "��ȭ��ȣ�� " << person[i].getTel();

		}
	}
}