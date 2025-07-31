#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get을 엔터키까지 입력을 받고 출력합니다";
	int ch;
	while ((ch = cin.get()) != EOF) { // 엔터키가 입력될 때까지 반복
		cout.put(ch); // 입력된 문자를 출력
		if (ch == '\n') { // 엔터키가 입력되면
			break; // 반복문 종료
		}
	}
}

void get2() {
	cout << "cin.get(char&)로 엔터키까지 입력을 받고 출력합니다";
	char ch;
	while (1) {
		cin.get(ch);
		if (cin.eof()) break; // EOF를 만나면 읽기 종료
		cout.put(ch); // ch의 문자 출력
		if (ch == '\n')
			break; // <Enter> 키가 입력되면 읽기 중단
	}
}
int main() {
	get1(); // cin.get()을 이용하는 사례
	get2(); // cin.get(char&)을 이용하는 사례
}
