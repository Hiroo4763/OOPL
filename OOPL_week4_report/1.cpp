#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    // �⺻ ������
    Rectangle() {
        width = 1;
        height = 1;
    }

    // �� ���� ������ �޴� ������
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // ���簢�� ������
    Rectangle(int i) {
        width = i;
        height = i;
    }

    int isSquare();
};

// ���簢�� ���� �Ǵ�
int Rectangle::isSquare() {
    if (width == height) {
        return 1; // ���簢���� ���
    }
    else
        return 0;
}

int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
    if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
    if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;

    return 0;
}