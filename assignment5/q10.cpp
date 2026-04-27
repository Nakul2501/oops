#include <iostream>
#include <string>
using namespace std;
class person{
    public:
    string name;
    string address;
    person(){
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the address: ";
        cin>>address;
    }
};
class staff:virtual public person{
    public:
    int employee_id;
    string department;
    staff(){
        cout<<"Enter the employee ID: ";
        cin>>employee_id;
        cout<<"Enter the department: ";
        cin>>department;
    }
    void disp(){
        cout<< name<<endl;
        cout<< address<<endl;
        cout<< employee_id<<endl;
        cout<< department<<endl;
    }
};
class student:virtual public person{
    public:
    int student_id;
    string grade;
    student(){
        cout<<"Enter the student ID: ";
        cin>>student_id;
        cout<<"Enter the grade: ";
        cin>>grade;
    }
    void display(){
        cout<< name<<endl;
        cout<< address<<endl;
        cout<< student_id<<endl;
        cout<< grade<<endl;
    }
};
class teaching_assistant:public staff,public student{
    public:
    teaching_assistant(){
        cout<< name<<endl;
        cout<< address<<endl;
        cout<< employee_id<<endl;
        cout<< department<<endl;
        cout<< student_id<<endl;
        cout<< grade<<endl;
    }
};
int main(){
    student s1;
    s1.display();
    staff s2;
    s2.disp();
    teaching_assistant s3;
    return 0;
}