#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get�� ����Ű���� �Է��� �ް� ����մϴ�";
	int ch;
	while ((ch = cin.get()) != EOF) { // ����Ű�� �Էµ� ������ �ݺ�
		cout.put(ch); // �Էµ� ���ڸ� ���
		if (ch == '\n') { // ����Ű�� �ԷµǸ�
			break; // �ݺ��� ����
		}
	}
}

void get2() {
	cout << "cin.get(char&)�� ����Ű���� �Է��� �ް� ����մϴ�";
	char ch;
	while (1) {
		cin.get(ch);
		if (cin.eof()) break; // EOF�� ������ �б� ����
		cout.put(ch); // ch�� ���� ���
		if (ch == '\n')
			break; // <Enter> Ű�� �ԷµǸ� �б� �ߴ�
	}
}
int main() {
	get1(); // cin.get()�� �̿��ϴ� ���
	get2(); // cin.get(char&)�� �̿��ϴ� ���
}
