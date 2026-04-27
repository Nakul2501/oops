#include<iostream>
#include<string>
using namespace std;
class prac{
    public:
    int x=10;
    void pr();
};
 void prac::pr(){
    cout<<x;
}
 int main(){
    prac p;
    p.pr();
    return 0;}