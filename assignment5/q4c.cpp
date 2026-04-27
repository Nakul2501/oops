#include <iostream>
using namespace std;
class A{
    public:
    int a=10;
};
class B:public A{
    public:
    void x(){
        cout<<a<<" printed using first derived class"<<endl;
    }
};
class C:public A{
    public:
    void w(){
        cout<<a<<" printed using second derived class"<<endl;
    }
};
class D:public A{
    public:
    void e(){
        cout<<a<<" printed using third derived class"<<endl;
    }
};
int main(){
    B b;
    b.x();
    C c;
    c.w();
    D d;
    d.e();
    return 0;
}