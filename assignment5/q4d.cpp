#include <iostream>
using namespace std;
class A{
    public:
    int a=10;
};
class B:public A{
    public:
    int b=20;
};
class C:public B{
    public:
    void x(){
        cout<<a<<" and "<<b<<" printed using derived derived class"<<endl;
    }
};
int main(){
    C y;
    y.x();
    return 0;
}