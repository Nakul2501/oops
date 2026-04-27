#include <iostream>
#include <cmath>
using namespace std;
class cartesian {
    public:
    float x, y;
    void input() {
        cout << "Enter x and y: ";
        cin >> x >> y;
    } 
    void show() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
class polar {
    public:
    float r, angle;
    
    polar() {
        cout << "Enter r and angle: ";
        cin >> r >> angle;
    }  
    operator cartesian() {
    cartesian c;
    c.x = r * cos(angle);
    c.y = r * sin(angle);
    return c;
    }
};
int main() {
    polar p;
    cartesian c=p;
    c.show();
    return 0;
}