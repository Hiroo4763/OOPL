#include <iostream>
using namespace std;

int main()
{
	cout << "너비와 높이를 입력하세요:";
	int width;
	int height;
	cin >> width >> height;

	int area = width * height;
	cout << "너비 " << width << " 높이 " << height << " 면적은 " << area << "\n";
}