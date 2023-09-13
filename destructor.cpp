#include<iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"default constructor is called..."<<endl;
    }
    ~Test(){
        cout<<"Destructor is called..."<<endl;
    }
    Test(int a){
        cout<<"parameterzid constructor is called...\na:"<<a<<endl;
    }
    Test(char a){
    cout<<"parameterzid constructor called...\na:"<<a<<endl;
    }
};
int main(){
    Test a('Z'), t(150), asd;
}