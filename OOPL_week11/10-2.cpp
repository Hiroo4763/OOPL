#include <iostream>
#include <ostream>
using namespace std;
template <class T>
T bigger(T &a, T &b) { // �� ���� �Ű� ���� a, b�� ���Ͽ� ū ���� ����
	return (a > b) ? a : b;
}
int main() {
	int a = 20, b = 50;
	char c = 'a', d = 'z';
	cout << "bigger(20, 50)�� ����� " << bigger(a, b) << endl;
	cout << "bigger('a', 'z')�� ����� " << bigger(c, d) << endl;
}