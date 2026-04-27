#include <iostream>
using namespace std;
class A{
    public:
    int a=10;
};
class B:public A{
    public:
    void x(){
        a=a+10;
        cout<<a;
    }
};
class C:public A{
    public:
    void y(){
        a=a+20;
        cout<<a;
    }
};
class D:public B,public C{
    public:
    void z(){
        cout<<B::a<<" from b derived class and "<<C::a<<" from c derived class  "<<endl;
    }
};
int main(){
    D d;
    d.z();
    return 0;
}