#include <iostream>
#include <string>
using namespace std;
class STRING{
    public:
    string s;
    STRING(){
        cout << "Enter a string: ";
        getline(cin, s);
    }
    void operator==(STRING w){
        if(s == w.s){
            cout<<"Strings are equal";
        }
        else{
            cout<<"Strings are not equal";
        }
    }
    STRING operator+(STRING w){
        STRING t;
        t.s = s + w.s;
        return t;
    }
};
int main(){
    STRING s1, s2;
    s1 == s2;
    STRING s3 = s1 + s2;
    cout<<s3.s;
    return 0;
}