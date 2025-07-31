#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "C:\\Users\\qnrhd\\���� ȭ��\\OOPL_week12\\desert.jpg";
	const char* destFile = "C:\\Users\\qnrhd\\���� ȭ��\\OOPL_week12\\desert_copy.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cerr << "�ҽ� ������ �� �� �����ϴ�." << endl;
		return 1;
	}
	
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << destFile << " ������ �� �� �����ϴ�." << endl;
		return 0;
	}

	int c;
	while ((c = fsrc.get()) != EOF) {
		fdest.put(c);
	}
	cout << srcFile << " ������ " << destFile << "�� �����߽��ϴ�." << endl;
	fsrc.close();
	fdest.close();
}