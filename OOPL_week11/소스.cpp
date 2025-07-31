#include <iostream>
using namespace std;
class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	bool operator!(); // ! 연산자함수선언
};
void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
bool Power::operator!() {
	if(kick == 0 && punch == 0)
		return true; // 파워가 0이면 true 리턴
	else
		return false; // 파워가 0이 아니면 false 리턴
}

int main() {
	Power a(0, 0), b(5, 5);
	if (!a) cout << "a의파워가0이다." << endl; 
	else cout << "a의파워가0이아니다." << endl;
	if (!b) cout << "b의파워가0이다." << endl; // ! 연산자호출
	else cout << "b의파워가0이아니다." << endl;
}
