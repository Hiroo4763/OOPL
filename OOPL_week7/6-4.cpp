#include <iostream>
using namespace std;

// 원형 선언
void f(char c = ' ', int line = 1);

void f(char c, int line) {
	for (int i = 0; i < line; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << c;
		}
		cout << endl;
	}
	
}
int main() {
	f();
	f('%');
	f('@', 5);
}