#include <iostream>
using namespace std;
class b{
    public:
    int a=10;
};
class d:public b{
    public:
    void x(){
        cout<<a<<" printed using derived class"<<endl;
    }
};
int main(){
    d y;
    y.x();
    return 0;
}