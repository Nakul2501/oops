#include <iostream>
#include <cmath>
using namespace std;
void area (float a){
    float area =sqrt(3)*a*a/4;
    cout<<"The area of the triangle is: "<<area<<endl;
}
void area (float a, float b){
    float area =0.5*a*b;
    cout<<"The area of the triangle is: "<<area<<endl;
}
void area (float a, float b, float c){
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of the triangle is: "<<area<<endl;
}
int main(){
    area(6.9);
    area(7.8, 6.9);
    area(25.3, 4.9, 20.1);
    return 0;
}