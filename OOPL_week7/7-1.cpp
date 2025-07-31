#include <iostream>
using namespace std;

class rect;
bool equal(rect r, rect s);

class rect {
	int width, height;
public:
	rect(int w, int h) { this->width = w; this->width = h; }
	friend bool equal(rect r, rect s);
};

bool equal(rect r, rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}

int main()
{
	rect r1(3, 4), r2(4, 5);
	if (equal(r1, r2))
		cout << "���� ũ���Դϴ�." << endl;
	else
		cout << "�ٸ� ũ���Դϴ�." << endl;
	return 0;
}