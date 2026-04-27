#include <iostream>
using namespace std;
class A{
    public:
    int a;
    A(){
        cin>>a;
    }
    ~A(){
        a=a+100;
        cout<<a<<"  destructor of class A called"<<endl;}
};
class B:public A{
    public:
    void x(){
        cout<<a<<endl;
    }
};

int main(){
    B b;
    b.x();
    return 0;
}