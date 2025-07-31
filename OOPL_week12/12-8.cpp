#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char* file = "c:\\windows\\system.ini";
	ifstream fin;
	fin.open(file, ios::in | ios::binary);
	if (!fin)
	{
		return 0;
	}
} 