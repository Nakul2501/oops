#include <iostream>
using namespace std;
class Student{
public:
    int rollno;
    void input() {
        cin>>rollno;
    }
    void display() {
        cout <<  rollno << endl;
    }
};
int main() {
    int *q = new int;
    cin >> *q;
    cout <<*q << endl;
    delete q;

    float *w = new float;
    cin >> *w;
    cout << *w << endl;
    delete w;

    int *e = new int[3];
    cin >> e[0] >> e[1] >> e[2];
    cout << "integer array: ";
    for(int i = 0; i < 3; i++)
        cout << e[i] <<endl;
    cout << endl;
    delete[] e;

    float *rt = new float[3];
    cin >> rt[0] >> rt[1] >> rt[2];
    cout << "Float Array: ";
    for(int i = 0; i < 3; i++)
        cout << rt[i] << endl;
    cout << endl;
    delete[] rt;

    Student *s1 = new Student;
    s1->input();
    s1->display();
    delete s1;

    Student *s2 = new Student[2];
    s2[0].input();
    s2[1].input();
    cout << "Array of Objects:" << endl;
    s2[0].display();
    s2[1].display();
    delete[] s2;

    return 0;
}