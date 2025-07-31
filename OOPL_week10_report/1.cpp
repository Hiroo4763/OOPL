#include <iostream>
#include <string>
using namespace std;

class Shape { // 부모 클래스
protected:
	string name;
	int width, height;
public:
	Shape(string n = "n", int w = 0, int h = 0) { name = n; width = w; height = h; } // 생성자
	virtual double getArea() { return 0; } // 가상 함수
	string getName() { return name; } // 이름 반환 함수
};

class Oval : public Shape { // 타원 클래스
public:
	Oval(string n, int w, int h) : Shape(n, w, h) {} // 생성자
	virtual double getArea() {
		return 3.14 * width * height; // 타원의 넓이 계산
	}
};

class Rect : public Shape { // 직사각형 클래스
public:
	Rect(string n, int w, int h) : Shape(n, w, h) {} // 생성자
	virtual double getArea() {
		return width * height; // 직사각형의 넓이 계산
	}
};

class Triangular : public Shape { // 삼각형 클래스
public:
	Triangular(string n, int w, int h) : Shape(n, w, h) {} // 생성자
	virtual double getArea() {
		return (width * height) / 2.0; // 삼각형의 넓이 계산
	}
};


int main() {
	Shape* p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);
	for (int i = 0; i < 3; i++) {
		cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << endl;
	}
	for(int i = 0; i < 3; i++) {
		delete p[i];
	}
}