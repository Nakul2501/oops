#include <iostream>
using namespace std;
class b{
    private:
    void pd(){
        cout<<"private"<<endl;
    }
    protected:
    void prod(){
        cout<<"protected"<<endl;
    }
    public:
    void pud(){
        cout<<"public"<<endl;
    }
};
class d1:private b{};
class d2:protected b{};
class d3:public b{};
int main(){
    d3 obj;
    obj.pud();
    return 0;
}