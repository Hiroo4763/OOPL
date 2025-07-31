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

// Circle 객체를 참조로 받아 반지름을 입력받는 함수
void readRadius(Circle& a) {
	int r;
	cout << "donut의 반지름을 입력하시오: ";
	cin >> r;           // 사용자로부터 반지름 입력
	a.setRadius(r);     // 입력받은 값으로 Circle 객체의 반지름 설정
}

int main() {
	Circle donut;        // 기본 생성자로 반지름이 1인 Circle 객체 생성
	readRadius(donut);   // 함수 호출을 통해 사용자로부터 반지름 입력받아 설정
	cout << "donut의 면적 = " << donut.getArea() << endl; // 면적 출력
}
