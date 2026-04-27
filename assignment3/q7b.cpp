#include <iostream>
using namespace std;
class student{
    public:
    int rollno;
    int input(){
        cin>>rollno;
    }
};
student gr(student &s1, student &s2){
    if(s1.rollno > s2.rollno){
        return s1;
    }
    else{
        return s2;
    }
}
int main(){
    student s1, s2;
    s1.input();
    s2.input();
    student res = gr(s1, s2);
    cout<<res.rollno;
    return 0;
}