//2-5예제를 STRING으로 바꾸기
#include <iostream>
#include <string>
using namespace std;

int main() {

	string password;
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true) { // while true 사용할 때 탈출 확실하게 시키기
		cout << "암호:";
		getline(cin, password);
		if (password == "C++") {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else {
			cout << "암호가 틀립니다." << endl;
		}
	}
}