#include <iostream>
using namespace std;

struct movie // ����ü�±׸�movie��
{
	char name[20]; // ����ü���name��stars������.
	int stars;
}; // �����ݷ����θ�ħ�������Ұ�.

int main(){
	movie titles[3] = { {" �ѻ�", 1}, {" ž��", 2}, {" ��¡�����", 3}};
	for (int i = 0; i < 3; i++)
	cout << titles[i].name << "." << titles[i].stars << endl;
}