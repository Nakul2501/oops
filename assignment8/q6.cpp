#include <iostream>
using namespace std;
template<typename t>
class stack{
    t arr[5];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push(t x){
        if(top==4){
            cout<<"Stack overflow";
        }
        else{
            top++;
            arr[top]=x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow";
        }
        else{
            top--;
        }
    }
    void display(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    s.display();
    return 0; 
}