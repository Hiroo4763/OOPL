#include <iostream>
using namespace std;

class A {
    int x;
public:
    A() { x = 0; }
    A(int x) { this->x = x; }
    void print() const {
        cout << "A::x = " << x << endl;
    }
};

class B : public A {
    int y;
public:
    B(int x, int y) : A(x + 5) {
        this->y = y;
    }
    void print() const {
        A::print();
        cout << "B::y = " << y << endl;
    }
};

class C : public B {
    int m;
public:
    C(int x, int y, int z) : B(x, y) {
        m = x * y * z;
    }
    void print() const {
        B::print();
        cout << "C::m = " << m << endl;
    }
};

int main() {
    C c(3, 5, 2);
    c.print();
}
