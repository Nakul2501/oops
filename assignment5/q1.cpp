#include <iostream>
using namespace std;
class base{
    public:
    void disp(){
        cout<<"base class"<<endl;
    }
};
class derived:public base{
    public:
    void show(){
        cout<<"derived class"<<endl;
    }
};
int main(){
    base b1;
    derived d1;
    b1.disp();
    d1.show();
    d1.disp();
    return 0;
}