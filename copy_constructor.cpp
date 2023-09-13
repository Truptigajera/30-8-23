#include<iostream>
using namespace std;
class Test{
    int n;
    public:
    Test (int a){
        n=a;
    }
    int getN(){
        return n;
    }
    Test(Test &x){
        n=x.n;
    }
};
int main(){
    Test t(100);
    cout<<"value of n is:"<<t.getN()<<endl;
    Test a(t);
    cout<<"New value n is:"<<a.getN()<<endl;
}