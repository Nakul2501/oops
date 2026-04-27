#include <iostream>
using namespace std;
template<typename t>
class store{
    t a,b;
    public:
    void get(){
        cout<<"Enter the value: ";
        cin>>a>>b;
    }
    void display(){
        cout<<"The value is: "<<a<<" "<<b;
    }
};
int main(){
    store<int> s;
    s.get();
    s.display();
    return 0;
}