#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    // 기본 생성자
    Rectangle() {
        width = 1;
        height = 1;
    }

    // 두 개의 정수를 받는 생성자
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // 정사각형 생성자
    Rectangle(int i) {
        width = i;
        height = i;
    }

    int isSquare();
};

// 정사각형 여부 판단
int Rectangle::isSquare() {
    if (width == height) {
        return 1; // 정사각형인 경우
    }
    else
        return 0;
}

int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
    if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;

    return 0;
}