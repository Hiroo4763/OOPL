#include <iostream>
using namespace std;

struct movie
{
	char name[20];
	int stars;
} titles;
int main()
{
	movie titles[3] = { {" �ѻ�", 1}, {" ž��", 2}, {" ��¡�����", 3} };
	for (int i = 0; i < 3; i++)
		cout << titles[i].name << "." << titles[i].stars << endl;
}