#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin;
	fin.open("C:\\Users\\qnrhd\\���� ȭ��\\OOPL_week12\\song.txt");
	if (!fin) {
		cout << "������ �� �� �����ϴ�." << endl;
		return 0;
	}

	char name[10], dept[20];
	int sid;

	fin >> name;
	fin >> sid;
	fin >> dept;
	
	cout << name << endl;
	cout << sid << endl;
	cout << dept << endl;

	fin.close();
}