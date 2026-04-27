#include <iostream>
using namespace std;
int main(){
    float a,b;
    char o;
    cout<<"enter first number,operation,second number";
    cin>>a>>o>>b;
    switch (o) {
        case '+':
            cout<<a+b;
            break;

        case '-':
            cout<<a-b;
            break;

        case '*':
            cout<<a*b;
            break;

        case '/':
            cout<<a/b;
            break;

        default:
            cout<<"invalid operation";
    }
    return 0;
}