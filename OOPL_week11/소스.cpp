#include <iostream>
using namespace std;
class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	bool operator!(); // ! �������Լ�����
};
void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
bool Power::operator!() {
	if(kick == 0 && punch == 0)
		return true; // �Ŀ��� 0�̸� true ����
	else
		return false; // �Ŀ��� 0�� �ƴϸ� false ����
}

int main() {
	Power a(0, 0), b(5, 5);
	if (!a) cout << "a���Ŀ���0�̴�." << endl; 
	else cout << "a���Ŀ���0�̾ƴϴ�." << endl;
	if (!b) cout << "b���Ŀ���0�̴�." << endl; // ! ������ȣ��
	else cout << "b���Ŀ���0�̾ƴϴ�." << endl;
}
