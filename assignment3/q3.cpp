#include <iostream>
using namespace std;
class b;
class a {
    int x;
    public:
        a(){
            cin>>x;
        }
        friend int add(a &, b &);
    };
class b {
    int y;
    public:
        b(){
            cin>>y;
        }
        friend int add(a &, b &);
};
int add(a &t, b &v) {
    int sum=t.x + v.y;
    return sum;
}
int main() {
    a a1;
    b b1;
    cout<<add(a1, b1);
    return 0;
}