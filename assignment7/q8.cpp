#include <iostream>
using namespace std;
class array {
    int a[5];
    public:
    array(){
        for(int i = 0; i < 5; i++) {
            a[i] = i + 1;
        }
    }
    int operator[](int index) {
        if(index < 0 || index >= 5) {
            cout << "Index Out of Bounds!" << endl;
        }
        return a[index];
    }
};
int main() {
    array obj;
    cout << obj[2] << endl; 
    cout << obj[4] << endl;   
    cout << obj[7] << endl; 

    return 0;
}