#include <iostream>
using namespace std;
class complex{
    private:
        int real;
        int imag;
    public:
        complex(int r,int i){
            real=r;
            imag=i;
        }
        complex(complex &c){
            real=c.real;
            imag=c.imag;
        }
        void display(){
            cout<<"Real: "<<real<<endl;
            cout<<"Imaginary: "<<imag<<endl;
        }
        friend void sum(complex &c1,complex &c2);
};

void sum(complex &x,complex &y){
    cout<<"Sum: "<<x.real+y.real<<" + "<<x.imag+y.imag<<"i"<<endl;
}

int main(){
    complex c1(3,4);
    complex c2(c1);
    sum(c1,c2);
    return 0;
}