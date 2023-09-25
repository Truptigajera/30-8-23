#include<iostream>
using namespace std;
class Bank{
    int bal;
    string name;
    public:
    void setdata(int bal, string name){
        this->bal=bal;
        this->name=name;
   }
    void getdata(){
        cout<<"Account holder name is:"<<name<<endl;
        cout<<"Balance is:"<<bal<<endl;
    }        
};
int main(){
    Bank b;
    b.setdata(15000,"skill");
    b.getdata();
}