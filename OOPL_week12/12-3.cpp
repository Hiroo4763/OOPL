#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";

	ifstream fin(file);
	if (!fin) {
		cerr << "파일을 열 수 없습니다." << endl;
		return 1;
	}

	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) {
		cout << (char)c;
		count++;
	}	
	cout << "읽은 바이트 수는" << count << "바이트입니다." << endl;
	fin.close();
}