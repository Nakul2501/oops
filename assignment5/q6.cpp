#include <iostream>
#include <string>
using namespace std;
class book{
    public:
    string title;
    string author;
    int price;
};
class textbook:public book{
    public:
    string subject;
    textbook(){
        cout<<"Enter the title of the textbook: ";
        getline(cin,title);
        cout<<"Enter the author of the textbook: ";
        getline(cin,author);
        cout<<"Enter the price of the textbook: ";
        cin>>price;
        cout<<"Enter the subject of the textbook: ";
        getline(cin,subject);
    }
    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};
int main(){
    textbook t;
    t.display();
    return 0;
}