#include <iostream>
using namespace std;
class base{
    protected:
    int a;
};
class derived:public base{
    public:
    void x(){
        cin>>a;
        cout<<a<<endl;
    }
};
int main(){
    derived d;
     d.x();
    return 0;
}