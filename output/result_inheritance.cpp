#include<iostream>
using namespace std;
class sub{
    protected:
    int eng,guj;
    public:
    void setA(){
         cout<<"enter subject marks:";
        cin>>eng>>guj;
    }
};
class result : public sub{
    public:
    void getA(){
        cout<<"english:"<<eng<<endl;
        cout<<"gujrati:"<<guj<<endl;
    }
};
int main()
{
    result r;
    r.setA();
    r.getA();
}