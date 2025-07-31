#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price); // 생성자
	~Book();
	Book(const Book& other); // 복사생성자
	void set(const char* title, int price);
	void show() { cout << title << ',' << price << "원" << endl; }
};

Book::Book(const char* title, int price) // 생성자
{
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::Book(const Book& other) { // 복사생성자(깊은 복사)
	this->title = new char[strlen(other.title) + 1];
	strcpy(this->title, other.title);
	this->price = other.price;
}

Book::~Book() // 소멸자
{
	delete[] title;
}

void Book::set(const char* title, int price) 
{
	delete[] this->title; // 기존 title 메모리 해제
	this->title = new char[strlen(title) + 1]; // 새로운 메모리 할당
	strcpy(this->title, title); // 새로운 title 복사
	this->price = price;
}

int main() 
{
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}