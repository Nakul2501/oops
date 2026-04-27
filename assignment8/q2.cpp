#include<iostream>
using namespace std;
template<typename T>
void minimum(T ar[]){
    T k=ar[0];
    for (int i=1;i<5;i++){
       if(ar[i]<k){
        k=ar[i];
        }
    }
    cout<<k;
}
int main(){
    int ar[5];
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    minimum(ar);
    return 0;
}