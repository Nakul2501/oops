#include <iostream>
using namespace std;
template<typename t>
class queue{
    t arr[5];
    int front=0;
    int rear=-1;
    public:
    void enqueue(t x){
        if(rear==4){
            cout<<"Queue overflow";
        }
        else{
            rear++;
            arr[rear]=x;
        }
    }
    void dequeue(){
        if(front==0 && rear==-1){
            cout<<"Queue underflow";
        }
        else{
            front++;
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    queue<int> q;
    q.enqueue(56);
    q.enqueue(12);
    q.enqueue(23); 
    q.dequeue();
    q.display();
    return 0; 
}