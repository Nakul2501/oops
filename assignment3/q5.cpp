#include <iostream>
using namespace std;

class area{
    public:
    int l;
    int b;
    area(){
        cin>>l>>b;
        cout<<"area of rectangle is"<<l*b<<endl;
    }
};
int main(){
    int n;
    cin>>n;
    area a[n];
    return 0;
}