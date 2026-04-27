#include <iostream>
using namespace std;
class b;
class a {
    int x = 10;
public:
    friend void swap(a &, b &);
    void printa() {
        cout << "Value of x = " << x << endl;
    }
};
class b {
    int y = 20;
public:
    friend void swap(a &, b &);
    void printb() {
        cout << "Value of y = " << y << endl;
    } 
};
void swap(a &t, b &v) {
    int temp;
    temp = t.x;
    t.x = v.y;
    v.y = temp;
}
int main() {
    a a1;
    b b1;
    cout << "Before Swapping:" << endl;
    a1.printa();
    b1.printb();
    swap(a1, b1);
    cout << "\nAfter Swapping:" << endl;
    a1.printa();
    b1.printb();
    return 0;
}