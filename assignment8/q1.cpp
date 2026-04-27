#include<iostream>
using namespace std;
template<typename T,typename X>
T swaping(T a,X b){
    T c;
    c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b;
}
int main(){
    float x;
    int y;
    cin>>x>>y;
    swaping(x,y);
    return 0;
}