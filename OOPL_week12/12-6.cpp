#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void fileRead(vector<string>& v, ifstream& fin)
{
	string line;
	while (1) {
		getline(fin, line);
		if (fin.eof()) break; 
		v.push_back(line);
	}
}

void search(const vector<string>& v, const string& word)
{
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if(index != -1)
			cout << v[i] << endl;
	}
}

int main()
{
	vector<string> wordVector;
	ifstream fin("C:\\Users\\qnrhd\\���� ȭ��\\OOPL_week12\\words.txt");
	if (!fin) {
		cerr << "������ �� �� �����ϴ�." << endl;
		return 1;
	}
	fileRead(wordVector, fin);
	cout << "words.txt ������ �о����ϴ�" << endl;
	fin.close();
	while (1) {
		cout << "�˻��� �ܾ�>> ";
		string word;
		getline(cin, word);
		if (word == "exit") {
			break;
		}
		search(wordVector, word);
	}
	cout << "���α׷��� �����մϴ�" << endl;
}