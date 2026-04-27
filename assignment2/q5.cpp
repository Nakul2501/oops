#include<iostream>
#include<string>
using namespace std;
class complex{ 
    public:
    int real,imag;
    void setcomplex(float x,float y){
        real=x;
        imag=y;
    }
    void displaycomplex(){
        cout<<real<<"+i"<<imag<<endl;
    }

};
int calculatesum(complex *x1,complex *x2){
    int q= x1->real+x2->real;
    int w=x1->imag+x2->imag;
    cout<<q<<"+i"<<w;

}
int main(){
    complex x1;
    float a,b;
    cin>>a>>b;
    x1.setcomplex(a,b);
    complex x2;
    float r,t;
    cin>>r>>t;
    x2.setcomplex(r,t);
    calculatesum(&x1,&x2);
    return 0;
}