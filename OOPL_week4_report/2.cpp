#include <iostream>
using namespace std;

class Tower { // Tower Ŭ���� ����
private:
    int height;  // ž�� ���̸� ������ ��� ����

public:
    Tower() { // �⺻ ������: ���̸� 1�� �ʱ�ȭ
        height = 1;
    }

    Tower(int h) { // ���޹��� ������ ���� �ʱ�ȭ
        height = h;
    }

    int getHeight(); // ���̸� ��ȯ�ϴ� ��� �Լ� ����
};

// ��� �Լ� ����
int Tower::getHeight() {
    return height;
}

int main() {
    Tower myTower;            // �⺻ ������ ȣ�� �� ���� 1����
    Tower seoulTower(100);    // �Ű����� ������ ȣ�� �� ���� 100����

    // ������ ���� ���
    cout << "���̴� " << myTower.getHeight() << "����" << endl;
    cout << "���̴� " << seoulTower.getHeight() << "����" << endl;

    return 0;
}