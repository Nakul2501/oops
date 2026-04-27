#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter number of days";
    cin>> day;
    if (0<day && day<=5){
        cout<<"fine is 50 paise";
    }
    else if(5<day && day<=10){
        cout<<"fine is 1 rupee";
    }
    else if(10<day && day<=30){
        cout<<"fine is 5 rupees";
    }
    else{
        cout<<"membership is cancelled";
    }
    return 0;
} 