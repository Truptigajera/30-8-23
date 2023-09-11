#include<iostream>
using namespace std;
class report{
    int adno;
    char name[20];
    float a[5];
        float avg;
    void getavg(){
        avg=(a[0]+a[1]+a[2]+a[3]+a[4])/5;
    }
    public:
    report(){
        cout<<"admin no:";
        cin>>adno;
        cout<<"student name";
        cin>>name;
        cout<<"enter marks in:";
        for(int i=0;i<5;i++){
            cout<<"subject:"<<i+1<<":";
            cin>>a[i];
        }
        avg=(a[0]+a[1]+a[2]+a[3]+a[4])/5;
    }
    void displaydata(){
        cout<<"admin no:"<<adno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"marks are:"<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
        cout<<"aveerage:"<<avg<<endl;
    }
};
int main(){
    report r;
    r.displaydata();
}