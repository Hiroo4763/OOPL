#include <iostream>
using namespace std;

class Rect;
class RectManager { // RectManagerŬ��������
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};
class Rect { // RectŬ��������
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager;
};
bool RectManager::equals(Rect r, Rect s) { // r��s��������true ����
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}
void RectManager::copy(Rect& dest, Rect& src) { // src��dest������
	dest.width = src.width;  dest.height = src.height;
}