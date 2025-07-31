#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price); // ������
	~Book();
	Book(const Book& other); // ���������
	void set(const char* title, int price);
	void show() { cout << title << ',' << price << "��" << endl; }
};

Book::Book(const char* title, int price) // ������
{
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::Book(const Book& other) { // ���������(���� ����)
	this->title = new char[strlen(other.title) + 1];
	strcpy(this->title, other.title);
	this->price = other.price;
}

Book::~Book() // �Ҹ���
{
	delete[] title;
}

void Book::set(const char* title, int price) 
{
	delete[] this->title; // ���� title �޸� ����
	this->title = new char[strlen(title) + 1]; // ���ο� �޸� �Ҵ�
	strcpy(this->title, title); // ���ο� title ����
	this->price = price;
}

int main() 
{
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}