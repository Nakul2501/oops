#include<iostream>
using namespace std;
class staticvariable{
    public:
    static int x;
    void increase();
    
};
void staticvariable::increase(){
    x++;
}
int staticvariable::x;
int main (){
    staticvariable s1;
    cin>>staticvariable::x;
    s1.increase();
    cout<<staticvariable::x;
    return 0;
}