#include<iostream>
using namespace std;
class test
{
    int testcode;
    char description[30];
    int nocondidate;
    float centerreqd;
    int calcntr()
    {
        return nocondidate / 100+1;
    }
    public:
    void schedule()
    {
        cout<<"enter test code :";
        cin>>testcode;
        cout<<"description :";
        cin>>description;
        cout<<"No of condidte :";
        cin>>nocondidate;

        centerreqd = calcntr();
    }
    void disptest()
    {
        cout<<"testcode :"<<testcode<<endl;
        cout<<"description :"<<description<<endl;
        cout<<"No of condidate :"<<nocondidate<<endl;
        cout<<"centerreqd :"<<centerreqd<<endl;

    }
};
int main()
{
    test c;

    c.schedule();
    c.disptest();
}