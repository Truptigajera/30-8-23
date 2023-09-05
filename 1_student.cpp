#include<iostream>
using namespace std;
class student{
    int adminNo;
    char sname[20];
    float eng,maths,sci,total;
    float ctotal(){
        return eng+maths+sci;
    }
    public:
    void takedata(){
        cout<<"enter admin no:";
        cin>>adminNo;
        cout<<"enter admin name:";
        cin>>sname;
        cout<<"enter english marks:";
        cin>>eng;
        cout<<"enter maths marks:";
        cin>>maths;
        cout<<"enter science marks:";
        cin>>sci;
        total = ctotal();
    }
    void showdata(){
        cout<<"admin no:"<<adminNo<<endl;
        cout<<"admin name :"<<sname<<endl;
        cout<<"english :"<<eng<<endl;
        cout<<"maths :"<<maths<<endl;
        cout<<"science:"<<sci<<endl;
        cout<<"total :"<<total<<endl;
    }
};
    int main(){
        student s;
        s.takedata();
        s.showdata();
    }