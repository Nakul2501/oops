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
    rectangle r[4] = {
        rectangle(),
        rectangle(0.9,10),
        rectangle(6.9),
        rectangle(100)
    };
    return 0;
}