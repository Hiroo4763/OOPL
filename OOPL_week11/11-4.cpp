#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "cin.getline() �Լ��� ������ �н��ϴ�." << endl;
    cout << "exit�� �Է��ϸ� ������ �����ϴ�." << endl;
    int no = 1; // ���� ��ȣ
    while (true) {
        cout << "���� " << no << " >> ";
        getline(cin, line); // �� �� ��ü�� ����
        if (line == "exit")
            break;
        cout << "echo --> ";
        cout << line << endl; // ���� ������ ȭ�鿡 ���
        no++; // ���� ��ȣ ����
    }
}

/// 11-4�� string Ŭ������ �̿��� �ڵ�� �����϶�µ� �̰� ����?