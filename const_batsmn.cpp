 #include<iostream>
using namespace std;
class batsman{
    int bcod;
    char bname[20];
    int ining,notout,runs,batavg;
    float calcavg(){
        batavg=runs/(ining - notout);
    }
    public:
    batsman(){
        cout<<"enter bcod is:";
        cin>>bcod;
        cout<<"enter name:";
        cin>>bname;
        cout<<"enter inning:";
        cin>>ining;
        cout<<"enter notout ball:";
        cin>>notout;
        cout<<"enter runs:";
        cin>>runs;
        batavg=runs/(ining-notout);
    }

    void displaydata(){
        cout<<"bcode:"<<bcod<<endl;
        cout<<"name:"<<bname<<endl;
        cout<<"ining:"<<ining<<endl;
        cout<<"notout:"<<notout<<endl;
        cout<<"runs:"<<runs<<endl;
        cout<<"batavg:"<<batavg<<endl;
    }
};
int main(){
    batsman r;
    r.displaydata();
}