#include <iostream>
using namespace std;
template<typename t>
class arr{
    t a[5];
    public:
    void get(){
        for(int i=0;i<5;i++){
            cin>>a[i];
        }
    }
     void display(){
        for(int i=0;i<5;i++){
            cout<<a[i]<<" ";
        }
    }
};
int main(){
    arr<int> a;
    a.get();
    a.display();
    return 0;
}