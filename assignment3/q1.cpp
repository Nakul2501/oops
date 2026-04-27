#include <iostream>
using namespace std;
class exp {
    int num;
public:
    void setData(int num) {
        this->num = num; 
    }
    void show() {
        cout << "Number = " << num << endl;
    }
};

int main() {
    exp one; 
    one.setData(10);   
    exp *ptr = &one; 
    ptr->show();      
    return 0;
}