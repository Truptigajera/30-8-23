 #include<iostream>
using namespace std;
class Base{
    public:
    virtual void show() = 0;

};
class derived1 : public Base{
    public:
    void show(){
        cout<<"Derived 1 class show function called..."<<endl;
    }
};
class derived2 : public Base{
    public:
    void show(){
        cout<<"derved 2 clss show function called..."<<endl;
    }
};
int main(){
    Base *p;
    derived1 d;
    derived2 d2;

    p=&d2;
    p->show();

    p=&d;
    p->show();
}