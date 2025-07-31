#include <iostream>
using namespace std;

class Tower { // Tower 클래스 정의
private:
    int height;  // 탑의 높이를 저장할 멤버 변수

public:
    Tower() { // 기본 생성자: 높이를 1로 초기화
        height = 1;
    }

    Tower(int h) { // 전달받은 값으로 높이 초기화
        height = h;
    }

    int getHeight(); // 높이를 반환하는 멤버 함수 선언
};

// 멤버 함수 정의
int Tower::getHeight() {
    return height;
}

int main() {
    Tower myTower;            // 기본 생성자 호출 → 높이 1미터
    Tower seoulTower(100);    // 매개변수 생성자 호출 → 높이 100미터

    // 각각의 높이 출력
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

    return 0;
}