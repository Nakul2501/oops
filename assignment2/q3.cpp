#include<iostream>
#include<string>
using namespace std;
class prac{
    private:
    void hi(){
        cout<<"hi";
    }
    public:
    void calling(){
        hi();
    }
};
int main(){
    prac pi;
    pi.calling();
    return 0;
}