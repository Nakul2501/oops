#include <iostream>
using namespace std;
class B;
class A {
private:
    int x;
public:
    A() {
        cout << "Enter value for class A: ";
        cin >> x;
    }
    friend int add(A, B);
};
class B {
private:
    int y;
public:
    B() {
        cout << "Enter value for class B: ";
        cin >> y;
    }

    friend int add(A, B);
};
int add(A x, B y) {
    return x.x + y.y;
}

int main() {
    A obj1;
    B obj2;
    cout << "Sum = " << add(obj1, obj2);

    return 0;
}