#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	cout << "이름>>";
	cin >> name;
	cout << "학번>>";
	cin >> sid;
	cout << "학과>>";
	cin >> dept;

	ofstream fout("C:\\Users\\qnrhd\\바탕 화면\\OOPL_week12\\song.txt");
	if (!fout) {
		cerr << "파일을 열 수 없습니다." << endl;
		return 1;
	}

	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();
}