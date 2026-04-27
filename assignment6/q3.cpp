#include <iostream>
#include <string>
using namespace std;
class account{
    public:
        long long int acc_no;
        long long int transaction_id;
        string transaction_type;
        double amount;
        account(){
            cout<<"enter account number: ";
            cin>>acc_no;
            cout<<"enter transaction id: ";
            cin>>transaction_id;
            cout<<"enter transaction type: ";
            cin>>transaction_type;
            cout<<"enter amount: ";
            cin>>amount;
        }
        void displayDetails(){
            cout<<"Account Number: "<<acc_no<<endl;
            cout<<"Transaction ID: "<<transaction_id<<endl;
            cout<<"Transaction Type: "<<transaction_type<<endl;
            cout<<"Amount: "<<amount<<endl;
        }
};
long depositamount(account &acc1,account &acc2,double amount){
    acc1.amount=acc1.amount-amount;
    acc2.amount=acc2.amount+amount;
    return acc2.transaction_id;
}
long  creditamount(account &acc1,account &acc2,double amount=1000){
    acc1.amount=acc1.amount+amount;
    acc2.amount=acc2.amount-amount;
    return acc2.transaction_id;
}
int main(){
    account a[5]={
         account(),
         account(),
         account(),
         account(),
         account()
     };
    depositamount(a[0],a[1],500);
    creditamount(a[2],a[3],200);
    a[0].displayDetails();
    a[1].displayDetails();
    a[2].displayDetails();
    a[3].displayDetails();
    return 0;
}