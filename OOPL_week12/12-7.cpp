#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "C:\\Users\\qnrhd\\바탕 화면\\OOPL_week12\\desert.jpg";
	const char* destFile = "C:\\Users\\qnrhd\\바탕 화면\\OOPL_week12\\desert_copy.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cerr << "소스 파일을 열 수 없습니다." << endl;
		return 1;
	}
	
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << destFile << " 파일을 열 수 없습니다." << endl;
		return 0;
	}

	int c;
	while ((c = fsrc.get()) != EOF) {
		fdest.put(c);
	}
	cout << srcFile << " 파일을 " << destFile << "로 복사했습니다." << endl;
	fsrc.close();
	fdest.close();
}