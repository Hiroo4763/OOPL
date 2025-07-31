#include <iostream>
#include <string>
using namespace std;

class Person {
	string name; // 이름 변수
	string tel; // 전화번호 변수
public:
	Person(); // 기본 생성자
	string getName() // 이름 반환 함수
	{
		return name;
	}
	string getTel() // 전화번호 반환 함수
	{
		return tel;
	}
	void set(string name, string tel); // 이름, 전화번호 설정 함수
};

Person::Person() // 기본 생성자
{
	
}

void Person::set(string name, string tel) // 매개변수로 받은 이름, 전화번호 멤버 변수에 저장
{
	this->name = name;
	this->tel = tel;
}

int main()
{
	Person person[3]; // 객체 3개 생성
	string name_input, tel_input, name_search; // 필요한 변수 선언
	
	cout << "이름과 전화 번호를 입력해주세요\n"; 
	for (int i = 0; i < 3; i++) // 이름, 전화번호를 입력받는 반복문
	{
		cout << "사람 " << i + 1 << " >> ";
		cin >> name_input >> tel_input;
		person[i].set(name_input, tel_input); 
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) // 모든 사람의 이름 출력
	{
		cout << person[i].getName() << " ";
	}

	cout << "\n전화번호 검색합니다. 이름을 입력하세요 >>"; 
	cin >> name_search; // 이름을 입력받음
	for (int i = 0; i < 3; i++) // 이름이 일치하는 객체를 찾아 전화번호 출력
	{
		if (name_search == person[i].getName())
		{
			cout << "전화번호는 " << person[i].getTel();

		}
	}
}