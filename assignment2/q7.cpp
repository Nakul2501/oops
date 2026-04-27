#include <iostream>
using namespace std;
namespace a {
    int value = 10;

    void display() {
        cout << "First Namespace Value = " << value << endl;
    }
}
namespace b {
    int value = 20;

    void display() {
        cout << "Second Namespace Value = " << value << endl;
    }
}
int main() {
    a::display();
    b::display();
    return 0;
}