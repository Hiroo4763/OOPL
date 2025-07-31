#include <iostream>
using namespace std;

struct movie // 구조체태그명movie로
{
	char name[20]; // 구조체멤버name과stars를선언.
	int stars;
}; // 세미콜론으로마침에주의할것.

int main(){
	movie titles[3] = { {" 한산", 1}, {" 탑건", 2}, {" 오징어게임", 3}};
	for (int i = 0; i < 3; i++)
	cout << titles[i].name << "." << titles[i].stars << endl;
}