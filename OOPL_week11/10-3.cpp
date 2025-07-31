#include <iostream>
using namespace std;
template <class T>

T add(T data[], int n) { // �迭 data, int n�� �Ķ���ͷ� �޴� ���׸� �Լ� add, ���� Ÿ���� T
	T sum = T(); // sum ������ T Ÿ������ �ʱ�ȭ
	for (int i = 0; i < n; i++) {
		sum += data[i]; // �迭 data�� ���� 0���� n���� ���� ���� sum�� ����
	}
	return sum; // sum ���� ����
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
	cout << "sum of x[] = " << add(x, 5) << endl; // �迭 x�� ���� 5���� ���� ���
	cout << "sum of d[] = " << add(d, 6) << endl; // �迭 d�� ���� 6���� ���� ���
}