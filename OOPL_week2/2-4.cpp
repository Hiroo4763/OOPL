#include <iostream>
using namespace std;

int main() {

	cout << "이름을	입력하세요>>";	

	char name[11]; // 한글은 5글자, 영어로 10자까지 가능 즉, 한글은 한글자에 2바이트다
	cin >> name;

	cout << "이름은" << name << "입니다.\n";	
}