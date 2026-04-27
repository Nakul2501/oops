#include <iostream>
using namespace std;
class time{
    int h,m,s;
    public:
    time(int x, int y, int z){
        h = x;
        m = y;
        s = z;
    }
    time operator+(time w){
        time t(0,0,0);
        t.s = s + w.s;
        t.m = m + w.m ;
        t.h = h + w.h;
        return t;
    }
    void show(){
        cout << h << ":" << m << ":" << s << endl;
    }
};
int main(){
    time t1(5,15,34),t2(9,53,58);
    time t3 = t1 + t2;
    t3.show();
    return 0;
}