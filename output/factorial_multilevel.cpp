#include<iostream>
using namespace std;
class base1{
    protected:
    int n;
    public:
    void setA(){
        cout<<"enter n:";
        cin>>n;
    }
};
class base2:public base1{
    protected:
    int i;
    public:
    void setB(){
        cout<<"enter i:";
        cin>>i;
    }
};
class derived : public base2{
    int fact;
    public:
    void getfact(){
        for(i=1;i<=n;i++){
            fact=fact*i;
            cout<<"no:"<<i<<endl;
            cout<<"fact is:"<<fact;
        }
        
    }
};
int main(){
    derived d;
    d.setA();
    d.setB();
    d.getfact();
}