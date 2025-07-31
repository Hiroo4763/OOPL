#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;

	cout << "5개의 정수를 입력하시오";
	for (int i = 0; i < 5; i++) {
		int n;
		cin >> n; // 사용자로부터 정수 입력 받기
		v.push_back(n); // 벡터에 정수 삽입
	}

	sort(v.begin(), v.end()); // 벡터의 원소를 오름차순으로 정렬

	vector<int>::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " "; // 정렬된 벡터의 모든 원소 출력
	}
	cout << endl;
}