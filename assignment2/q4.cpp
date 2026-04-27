#include<iostream>
#include<string>
using namespace std;
class rectangle{
    private:
    int width,height;

    public:
    void getdata(){
        cout<<"enter width";
        cin>>width;

        cout<<"enter height";
        cin>>height;
    }

    void calculatearea(){
        cout<<width*height;
    }
};
int main(){
    rectangle r1;
    r1.getdata();
    r1.calculatearea();
    return 0;
}