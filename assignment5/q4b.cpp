#include <iostream>
using namespace std;
class A{
    public:
    int a=10;
};
class B{
    public:
    int b=20;
};
class D:public A,public B{
    public:
    void x(){
        cout<<a<<" and "<<b<<" printed using derived class"<<endl;
    }
};
int main(){
    D y;
    y.x();
    return 0;
}