#include <iostream>
#include <string>
using namespace std;

class Shape { // �θ� Ŭ����
protected:
	string name;
	int width, height;
public:
	Shape(string n = "n", int w = 0, int h = 0) { name = n; width = w; height = h; } // ������
	virtual double getArea() { return 0; } // ���� �Լ�
	string getName() { return name; } // �̸� ��ȯ �Լ�
};

class Oval : public Shape { // Ÿ�� Ŭ����
public:
	Oval(string n, int w, int h) : Shape(n, w, h) {} // ������
	virtual double getArea() {
		return 3.14 * width * height; // Ÿ���� ���� ���
	}
};

class Rect : public Shape { // ���簢�� Ŭ����
public:
	Rect(string n, int w, int h) : Shape(n, w, h) {} // ������
	virtual double getArea() {
		return width * height; // ���簢���� ���� ���
	}
};

class Triangular : public Shape { // �ﰢ�� Ŭ����
public:
	Triangular(string n, int w, int h) : Shape(n, w, h) {} // ������
	virtual double getArea() {
		return (width * height) / 2.0; // �ﰢ���� ���� ���
	}
};


int main() {
	Shape* p[3];
	p[0] = new Oval("��붱", 10, 20);
	p[1] = new Rect("����", 30, 40);
	p[2] = new Triangular("�佺Ʈ", 30, 40);
	for (int i = 0; i < 3; i++) {
		cout << p[i]->getName() << "���̴� " << p[i]->getArea() << endl;
	}
	for(int i = 0; i < 3; i++) {
		delete p[i];
	}
}