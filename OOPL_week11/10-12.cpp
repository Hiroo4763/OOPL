#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;

	cout << "5���� ������ �Է��Ͻÿ�";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n; // ����ڷκ��� ���� �Է� �ޱ�
		v.push_back(n); // ���Ϳ� ���� ����
	}

	sort(v.begin(), v.end()); // ������ ���Ҹ� ������������ ����

	vector<int>::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " "; // ���ĵ� ������ ��� ���� ���
	}
	cout << endl;
}