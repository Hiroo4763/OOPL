//2-5������ STRING���� �ٲٱ�
#include <iostream>
#include <string>
using namespace std;

int main() {

	string password;
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true) { // while true ����� �� Ż�� Ȯ���ϰ� ��Ű��
		cout << "��ȣ:";
		getline(cin, password);
		if (password == "C++") {
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else {
			cout << "��ȣ�� Ʋ���ϴ�." << endl;
		}
	}
}