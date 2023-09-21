#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void setA(){
        cout<<"enter a:";
        cin>>a;
    }
};
class derived : public base{
    protected:
    int b;
    public:
    void setB(){
        cout<<"enter b:";
        cin>>b;
    }
    void product(){
        cout<<"product is:"<<a*b<<endl;
    }
};
class derived2 :public base{
    protected:
    int c;
    public:
    void setC(){
        cout<<"enter c:";
        cin>>c;
    }
    void ADD(){
        cout<<"addition:"<<a+c<<endl;
    }
};
int main(){
    derived d;
    d.setA();
    d.setB();
    d.product();

    derived2 d2;
    d2.setA();
    d2.setC();
    d2.ADD();
}