#include <iostream>
using namespace std;

struct movie
{
	char name[20];
	int stars;
} titles;
int main()
{
	movie titles[3] = { {" 한산", 1}, {" 탑건", 2}, {" 오징어게임", 3} };
	for (int i = 0; i < 3; i++)
		cout << titles[i].name << "." << titles[i].stars << endl;
}