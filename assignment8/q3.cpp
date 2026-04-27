#include<iostream>
using namespace std;
template<typename T>
void sort(T ar[]){
    T temp;
    for (int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(ar[i]>ar[j]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
}
int main(){
    int ar[5];
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    sort(ar);
    for(int i=0;i<5;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}