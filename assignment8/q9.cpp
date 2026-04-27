#include <iostream>
using namespace std;
template<typename t>
class bao{
    t a,b;
    public:
    bao(){
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
    }
    void operation(){
        cout<<"The sum is: "<<a+b<<endl;
        cout<<"The difference is: "<<a-b<<endl;
        cout<<"The product is: "<<a*b<<endl;
        cout<<"The quotient is: "<<a/b<<endl;
    }
};
int main(){
    bao<int> b;
    b.operation();
    return 0;
}