#include <iostream>
using namespace std;
class A{
public:
    void operator()(int a) {
        cout <<a << endl;
    }
    void operator()(int a, int b) {
        cout <<a << " " << b << endl;
    }
    void operator()(int a, int b, int c) {
        cout <<a << " " << b << " " << c << endl;
    }
};
int main() {
    A q;
    q(5);
    q(10, 20);
    q(1, 2, 3);

    return 0;
}