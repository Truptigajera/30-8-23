//array of object
#include<iostream>
using namespace std;
class Test{
    int a,b;
    public:
    void setdata(){
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
        cin>>b;
    }
    void getdata(){
    
            cout<<"product of a and b is:"<<a*b<<endl;
        }
    };
    int main(){
        Test t[5];
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