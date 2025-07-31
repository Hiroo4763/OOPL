#include <iostream>
using namespace std;

class Rect;
class RectManager { // RectManager클래스선언
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};
class Rect { // Rect클래스선언
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager;
};
bool RectManager::equals(Rect r, Rect s) { // r과s가같으면true 리턴
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}
void RectManager::copy(Rect& dest, Rect& src) { // src를dest에복사
	dest.width = src.width;  dest.height = src.height;
}