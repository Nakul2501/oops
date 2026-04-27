#include <iostream>
using namespace std;
class rectangle{
    public:
    rectangle(){
        cout<<0<<endl;     
    }
    rectangle(float l,float b){
        cout<<l*b<<endl;     
    }
     rectangle(float l){
        cout<<l*l<<endl;     
    }
};
int main(){
    rectangle r1;
    rectangle r2(8.3,6.9);
    rectangle r3(8.9);
    return 0;
}