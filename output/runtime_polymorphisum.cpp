#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"Base class show function called..."<<endl;
    }
};
class derived : public base{
    public:
    void show()
    {
        cout<<"derived class show function called..."<<endl;
    }
};
int main(){
    base *p,b;
    derived d;
    p=&b;
    p->show();
}