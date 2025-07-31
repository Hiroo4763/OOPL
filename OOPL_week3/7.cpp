#include <iostream>
using namespace std;

int main()
{
    char str[] = { 'a', 'b', 'c',};
    char str1[] = { 'a', 'b', 'c', '\0' };

    for (int i = 0; i < sizeof(str) + 1; ++i) {
        cout << str[i];
    }
	cout << endl;
	cout << str1 << endl;

    return 0;
}