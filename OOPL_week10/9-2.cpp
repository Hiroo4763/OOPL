#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Base::f() called" << endl;
	}
};

class Derived : public Base {
public:
	virtual void f(){
		cout << "Derived::f() called" << endl;
	}
};

int main()
{
	Derived d, * pDer;
	pDer = &d;
	pDer->f();

	Base* pBase;
	pBase = pDer;
	pBase->f();
} // 오버라이딩, 가상함수 어쩌구 잘모르겠음 공부할 것