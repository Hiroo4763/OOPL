#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string address("대전시 유성구 동서대로 125");
	string copyAddress(address);

	char text[] = { 'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}