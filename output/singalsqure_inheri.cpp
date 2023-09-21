#include<iostream>
using namespace std;
class num{
    protected:
    int i,a;
    public:
    void setA(){
         
        for(i=1;i<=5;i++){
            a=i*i;
            cout<<"no:"<<i<<"="<<a<<endl;
        }
    }
};
class squre : public num{
    int a;
    public:
    void getA(){
        a=i*i;

        cout<<"no:"<<i<<"="<<a;
    }
};
int main()
{
    squre r;
    r.setA();
    r.getA();
}