#include<iostream>
using namespace std;
class large{
    friend void max(large t);    
    int a,b;
    public:
    void setdata(){
        cout<<"enter two number:";
        cin>>a>>b;
    }
};
    void max(large t){
        cout<<"largest no is:"<<((t.a>t.b)?t.a:t.b);
    }
    int main(){
        large t;
        t.setdata();
        max(t);  
    }