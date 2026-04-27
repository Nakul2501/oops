#include<iostream>
using namespace std;
int main(){
    float x,y;
    char z;
    cin>>x>>z>>y;
    switch(z){
        case '+' :
            cout<<x+y;
            break;
        case'-':
                cout<<x-y;
                break;
        case'*':
            cout<<x*y;
            break;
        case'/':
            if(y==0){
                cout<<"invalid operation";
                break;}
            else{
                cout<<x/y;
                break;}
        default:
            cout<<"invalid";
            break;
    }
    return 0;
}