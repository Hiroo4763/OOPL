#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	string press;
	string author;
public:
	Book(string title = "", string press = "", string author = "") {
		this->title = title;
		this->press = press;
		this->author = author;
	}
	friend ostream& operator<<(ostream& stream, Book b);
};

ostream& operator<<(ostream& stream, Book b) {
	stream << "Title: " << b.title << ", Press: " << b.press << ", Author: " << b.author;
	return stream;
}

int main() {
	Book book("������ �����", "�ѱ����ǻ�", "����������");
	cout << book << endl;
}