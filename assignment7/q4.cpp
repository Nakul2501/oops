#include <iostream>
#include <string>
using namespace std;
class Student{
protected:
    string name;
    int rollno;

public:
    Student(){
        cout<<"Enter name: ";
        cin>> name;
        cout<<"Enter roll number: ";
        cin>>rollno;
    }
    virtual void display() = 0;
};
class Engineering : public Student
{ 
public:
    void display()
    {
        cout << "Engineering Student\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
class Medicine : public Student
{
public:
    void display(){
        cout << "Medicine Student\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
class Science : public Student
{
public:
    void display(){
        cout << "Science Student\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
int main()
{
    Student* s[3];
    s[0] = new Engineering();
    s[1] = new Medicine();
    s[2] = new Science();

    for (int i = 0; i < 3; i++)
    {
        s[i]->display();
    }
    return 0;
}