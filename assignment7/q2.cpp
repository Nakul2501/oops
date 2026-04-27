#include<iostream>
#include<string>
using namespace std;
class shape{
    public:
    virtual int area()=0;
    virtual void display()=0;
};

class circle:public shape{
    private:
    int radius;
    public:
    circle(){
        cout<<"enter radius";
        cin>>radius;
    }
    int area(){
        return 3.14*radius*radius;
    }
    void display(){
        cout<<"circle"<<endl;
    }
};

class rectangle:public shape{
    private:
    int a,b;
    public:
    rectangle(){
        cout<<"enter length";
        cin>>a;
        cout<<"enter breadth";
        cin>>b;
    }
    int area(){
        return a*b;
    }
    void display(){
        cout<<"rectangle"<<endl;
    }
};
class triangle:public shape{
    private:
    int a,b;
    public:
    triangle(){
        cout<<"enter height";
        cin>>a;
        cout<<"enter base";
        cin>>b;
    }
    int area(){
        return a*b/2;
    }
    void display(){
        cout<<"triangle"<<endl;
    }
};
int main(){
    circle c;
    cout<<c.area()<<endl;
    c.display();

    rectangle r;
    cout<<r.area()<<endl;
    r.display();

    triangle t;
    cout<<t.area()<<endl;
    t.display();

    return 0;
}