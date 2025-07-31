#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* firstfile = "C:\\Users\\qnrhd\\���� ȭ��\\OOPL_week12\\song.txt";
	const char* secondfile = "c:\\windows\\system.ini";

	fstream fout(firstfile, ios::out | ios::app);
	if (!fout) {
		cerr << "������ �� �� �����ϴ�." << endl;
		return 1;
	}
	
	fstream fin(secondfile, ios::in);
	if (!fin) {
		cerr << "������ �� �� �����ϴ�." << endl;
		return 1;
	}

	int c;
	while ((c = fin.get()) != EOF) {
		fout.put(c);
	}
	
	fin.close();
	fout.close();
}