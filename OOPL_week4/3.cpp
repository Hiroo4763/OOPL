#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle::Circle() { // ������
	radius = 1;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::Circle(int r) { // ������
	radius = r;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::~Circle() { // �Ҹ���
	cout << "������" << radius << "�� �Ҹ�" << endl;
}

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������" << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������" << area << endl;

}