#include <iostream>
using namespace std;
template <class T>

T add(T data[], int n) { // 배열 data, int n을 파라미터로 받는 제네릭 함수 add, 리턴 타입은 T
	T sum = T(); // sum 변수를 T 타입으로 초기화
	for (int i = 0; i < n; i++) {
		sum += data[i]; // 배열 data의 값을 0부터 n까지 더한 합을 sum에 저장
	}
	return sum; // sum 변수 리턴
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
	cout << "sum of x[] = " << add(x, 5) << endl; // 배열 x와 원소 5개의 합을 계산
	cout << "sum of d[] = " << add(d, 6) << endl; // 배열 d와 원소 6개의 합을 계산
}