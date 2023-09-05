#include<iostream>
using namespace std;
class batsman{
    int bcode;
    char bname[20];
    int innings,notout,runs,batavg;
    float calcavg(){
        batavg = runs/(innings-notout);
    }
    public:
    void readdata(){
        cout<<"enter bcode:";
        cin>>bcode;
        cout<<"enter name:";
        cin>>bname;
        cout<<"enter innings:";
        cin>>innings;
        cout<<"enter notuot:";
        cin>>notout;
        cout<<"enter runs:";
        cin>>runs;
        batavg = runs /(innings-notout);
    }
    void displaydata(){
        cout<<"bcode :"<<bcode<<endl;
        cout<<"name :"<<bname<<endl;
        cout<<"innings :"<<innings<<endl;
        cout<<"notout :"<<notout<<endl;
        cout<<"runs :"<<runs<<endl;
        cout<<"batavg :"<<batavg<<endl;
    }
};
int main()
{
    batsman p;
    p.readdata();
    p.displaydata();
}