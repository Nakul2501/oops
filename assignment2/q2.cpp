#include<iostream>
#include<string>
using namespace std;
class students{
    private:
    string name;
    int rollno;
    string degree;
    
    public:
    char hostel;
    float currentcgpa;

    int addDetail(){
        cout<<"enter name";
        cin>>name;

        cout<<"enter roll no.";
        cin>>rollno;

        cout<<"enter degree";
        cin>>degree;

        cout<<"enter hostel";
        cin>>hostel;

        cout<<"enter current CGPA";
        cin>>currentcgpa;
    }

    int updateDetails(){
        cout<<"enter updated name";
        cin>>name;

        cout<<"enter updated roll no.";
        cin>>rollno;

        cout<<"enter updated degree";
        cin>>degree;
    }

    int updateCGPA(){
        cout<<"enter updated CGPA";
        cin>>currentcgpa;
    }

    int updatehostel(){
        cout<<"enter updated hostel";
        cin>>hostel;
    }

    void displaydetails(){
        cout<<name<<endl<<rollno<<endl<<degree<<endl<<hostel<<endl<<currentcgpa;
    }
};
int main(){
    students s1;
    s1.addDetail();
    s1.updateDetails();
    s1.updateCGPA();
    s1.updatehostel();
    s1.displaydetails();
    return 0;
}