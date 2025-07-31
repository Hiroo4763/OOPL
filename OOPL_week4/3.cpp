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

Circle::Circle() { // 생성자
	radius = 1;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r) { // 생성자
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::~Circle() { // 소멸자
	cout << "반지름" << radius << "원 소멸" << endl;
}

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은" << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은" << area << endl;

}