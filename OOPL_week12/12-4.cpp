#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* firstfile = "C:\\Users\\qnrhd\\바탕 화면\\OOPL_week12\\song.txt";
	const char* secondfile = "c:\\windows\\system.ini";

	fstream fout(firstfile, ios::out | ios::app);
	if (!fout) {
		cerr << "파일을 열 수 없습니다." << endl;
		return 1;
	}
	
	fstream fin(secondfile, ios::in);
	if (!fin) {
		cerr << "파일을 열 수 없습니다." << endl;
		return 1;
	}

	int c;
	while ((c = fin.get()) != EOF) {
		fout.put(c);
	}
	
	fin.close();
	fout.close();
}