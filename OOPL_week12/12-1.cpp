#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	cout << "�̸�>>";
	cin >> name;
	cout << "�й�>>";
	cin >> sid;
	cout << "�а�>>";
	cin >> dept;

	ofstream fout("C:\\Users\\qnrhd\\���� ȭ��\\OOPL_week12\\song.txt");
	if (!fout) {
		cerr << "������ �� �� �����ϴ�." << endl;
		return 1;
	}

	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();
}