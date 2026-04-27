#include<iostream>
using namespace std;
class polygon{
    protected:
    int width,height;
    public:
    void set_value(){
        cout<<"enter width";
        cin>>width;
        cout<<"enter height";
        cin>>height;
    }
    virtual int calculate_area()=0;
};
class rectangle:public polygon{
    public:
    int calculate_area(){
        return width*height;
    }
};
class triangle:public polygon{
    public:
    int calculate_area(){
        return width*height/2;
    }
};
int main(){
    polygon *p;
    triangle t;
    rectangle r;
    p=&r;
    p->set_value();
    cout<<"area of rectangle"<<p->calculate_area()<<endl;
    p=&t;
    p->set_value();
    cout<<"area of rectangle"<<p->calculate_area();
    return 0;
}