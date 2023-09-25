#include<iostream>
using namespace std;
class Bank{
    float amt;
    int balance=10000;
    public:
    void deposit(){
        cout<<"enter deposite amt is:";
        cin>>amt;
        balance=balance+amt;
        cout<<"after deposite balance:"<<balance<<endl;
    }
    void withdraw(){
        cout<<"enter withdraw amt:";
        cin>>amt;
        if(amt<=balance){
            balance=balance-amt;
            cout<<"after withdraw balance is:"<<balance<<endl;
        }
        else
            cout<<"insufficiant balance..."<<endl;
    }
    void showbalance(){
        cout<<"balance:"<<balance<<endl;
    }
};
int main(){
    Bank b;
    int ch;
    while(ch!=4){
    cout<<"1.deposite"<<endl;
    cout<<"2.withdraw"<<endl;
    cout<<"3.balance:"<<endl;
    cout<<"enter youe choice:"<<endl;
    cin>>ch;

    switch(ch){
        case 1:
        b.deposit();
        break;

        case 2:
        b.withdraw();
        break;

        case 3:
        b.showbalance();
        break;

        case 4:
        break;

        default:
        cout<<"wrong choice..."<<endl;
        
    }
    
    }
}