#include <iostream>
using namespace std;

class Circle {
	int radis; // ���� ������ ��
public:
	void setRadius(int radius); // �������� ����
	double getArea(); // ������ ����
};

void Circle::setRadius(int radius) { // ������ ���� �Լ�
	radis = radius; // �Ű������� ���� �������� ��� ������ ����
}
double Circle::getArea() { // ���� ��� �Լ�
	return 3.14 * radis * radis; // ���� ���
}

int main() {
	Circle circleArray[3]; // Circle ��ü 3�� ����
	int sum = 0, radius_input ; // �ʿ��� ���� ����

	for (int i = 0; i < 3; i++) { // �ݺ����� ���� ����ڷκ��� 3���� ������ �Է¹ް� ó��
		cout << "��" << i + 1 << "�� ������ >> ";
		cin >> radius_input; // ����� �Է�
		circleArray[i].setRadius(radius_input); // �Է°��� Circle ��ü�� ����
		if (circleArray[i].getArea() > 100) // ������ 100���� ū ��ü �Ǵ� 
			sum += 1; // ����
	}
	cout << "������ 100���� ū ����" << sum <<"�� �Դϴ�." ; // ���
}