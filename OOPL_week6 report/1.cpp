#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

// Circle ��ü�� ������ �޾� �������� �Է¹޴� �Լ�
void readRadius(Circle& a) {
	int r;
	cout << "donut�� �������� �Է��Ͻÿ�: ";
	cin >> r;           // ����ڷκ��� ������ �Է�
	a.setRadius(r);     // �Է¹��� ������ Circle ��ü�� ������ ����
}

int main() {
	Circle donut;        // �⺻ �����ڷ� �������� 1�� Circle ��ü ����
	readRadius(donut);   // �Լ� ȣ���� ���� ����ڷκ��� ������ �Է¹޾� ����
	cout << "donut�� ���� = " << donut.getArea() << endl; // ���� ���
}
