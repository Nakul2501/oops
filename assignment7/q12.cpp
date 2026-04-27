#include <iostream>
using namespace std;
class Test {
    float x;
public:
    Test(float a) {
        x = a;
    }
    operator float() {
        return x;
    }
};
int main() {
    Test t(9.2);
    float n;
    n = t;
    cout << n;
    return 0;
}