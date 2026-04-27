#include <iostream>
#include <string>
using namespace std;
class libraryuser{
    public:
    string name;
    int id;
    long long contact;
    libraryuser(){
        cout<<"Enter the name of the user: ";
        cin>>name;
        cout<<"Enter the id of the user: ";
        cin>>id;
        cout<<"Enter the contact number of the user: ";
        cin>>contact;
    }
};
class student:public libraryuser{
    public:
    string gradelevel;
    student(){
        cout<<"Enter the grade level of the student: ";
        cin>>gradelevel;
    }
    void disp(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Contact: "<<contact<<endl;
        cout<<"Grade Level: "<<gradelevel<<endl;
    }
};
class teacher:public libraryuser{
    public:
    string department;
    teacher(){
        cout<<"Enter the department of the teacher: ";
        cin>>department;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Contact: "<<contact<<endl;
        cout<<"Department: "<<department<<endl;
    }
};
int main(){
    teacher t1;
    t1.display();
    student s1;
    s1.disp();
    return 0;
}