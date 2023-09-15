 #include<iostream>
 using namespace std;
 class student{
    int admno;
    char sname[20];
    float eng,maths,sci,total;
    float ctotal(){
        return eng+maths+sci;
    }
    public:
    void takedata(){
        cout<<"enter admin no:";
        cin>>admno;
        cout<<"enter student name:";
        cin>>sname;
        cout<<"enter english:";
        cin>>eng;
        cout<<"enter maths:";
        cin>>maths;
        cout<<"enter science";
        cin>>sci;
        total=ctotal();
    }
    void showdata(){
        cout<<"admin no:"<<admno<<endl;
        cout<<"stu name:"<<sname<<endl;
        cout<<"english marks:"<<eng<<endl;
        cout<<"matths :"<<maths<<endl;
        cout<<"science:"<<sci<<endl;
        cout<<"total:"<<total<<endl;
    }
 };
 int main(){
    student s;
    s.takedata();
    s.showdata();
 }