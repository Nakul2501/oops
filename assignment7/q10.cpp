#include <iostream>
using namespace std;
class A {
    int x;
public:
    A() {
        cin>>x;
    }
    int operator>>(int q) {
        x=x+q;
        return x;
    }
    int operator<<(int w) {
        x=x-w;
        return x;
    }
};
int main() {
    A a1;
    a1>>5;  
    a1<<10;   
    return 0;
}