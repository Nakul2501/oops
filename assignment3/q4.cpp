#include<iostream>
using namespace std;
class ran{
    int x,b;
    public:
        ran(){
        cin>>x>>b;
    }
        friend int sum(ran a);
};
int sum(ran a){
    return a.x+a.b;
}
int main(){
    ran ab;
    cout<<sum(ab);
    return 0;
}