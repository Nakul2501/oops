#include <iostream>
using namespace std;

class qwe{
public:
    qwe() {
        cout << "hello" << endl;
    }

    ~qwe() {  
        cout << "bye" << endl;
    }
};

int main() {
    qwe d1;

    cout << "world" << endl;

    return 0;
}