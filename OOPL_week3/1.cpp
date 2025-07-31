#include <iostream>
using namespace std;

int main()
{
	char flag;
	cin >> flag;
	switch (flag)
	{
	case 'k':
		cout << "한국 화이팅\n";
		break; // break 빠지면 안됨
	case 'm':
		cout << "우유를 많이 먹자!\n";
		break;
	default:
		cout << "안녕히 가세요\n";
	}
	cout << "끝\n";

}