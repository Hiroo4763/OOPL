#include <iostream>
using namespace std;

class Circle {
	int radis; // 원의 반지름 값
public:
	void setRadius(int radius); // 반지름을 설정
	double getArea(); // 면적을 리턴
};

void Circle::setRadius(int radius) { // 반지름 설정 함수
	radis = radius; // 매개변수로 받은 반지름을 멤버 변수에 저장
}
double Circle::getArea() { // 면적 계산 함수
	return 3.14 * radis * radis; // 면적 계산
}

int main() {
	Circle circleArray[3]; // Circle 객체 3개 생성
	int sum = 0, radius_input ; // 필요한 변수 선언

	for (int i = 0; i < 3; i++) { // 반복문을 통해 사용자로부터 3개의 반지름 입력받고 처리
		cout << "원" << i + 1 << "의 반지름 >> ";
		cin >> radius_input; // 사용자 입력
		circleArray[i].setRadius(radius_input); // 입력값을 Circle 객체에 저장
		if (circleArray[i].getArea() > 100) // 면적이 100보다 큰 객체 판단 
			sum += 1; // 개수
	}
	cout << "면적이 100보다 큰 원은" << sum <<"개 입니다." ; // 출력
}