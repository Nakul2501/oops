#include <iostream>
using namespace std;
class Test {
    float x;
public:
    Test(float a) {
        x = a;
    }
    void show() {
        cout << "Value = " << x;
    }
};
int main() {
    float n ;
    cin >> n;
    Test t(n);
    t.show();
    return 0;
}