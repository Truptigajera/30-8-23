//array of object
#include<iostream>
using namespace std;
class result{
    int Rollno,eng ,sci;
    char Name[20];
    
    
    public:
    void setdata(){
        cout<<"enter roll no:";
        cin>>Rollno;
        cout<<"enter name:";
        cin>>Name;
        cout<<"enter eng:";
        cin>>eng;
        cout<<"enter sci:";
        cin>>sci;
        
    }
    void getdata(){
            cout<<"Roll No:"<<Rollno<<endl;
            cout<<"student Name :"<<Name<<endl;
            cout<<"Marks Total is:"<<eng+sci<<endl;
            cout<<"percentage is:"<<(eng+sci)/2<<endl;
        }
    };
    int main(){
        result t[5];
        int i;
        for(i=0;i<2;i++){
            cout<<"Enter data of "<<i+1<<endl;
            t[i].setdata();
        }
        cout<<endl<<endl;
        for(i=0;i<2;i++){
            cout<<"Enter data of "<<i+1<<endl;
            t[i].getdata();
        }
        
    }