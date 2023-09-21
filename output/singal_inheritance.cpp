/*#include<iostream>
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
    public:
    void getA(){
        cout<<"value of a is:"<<a<<endl;
    }
};
int main(){
    derived t;
    t.setA();
    t.getA();
}
*/

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
class derived : protected base{
    public:
    void getA(){
        base :: setA();
        cout<<"value of a is:"<<a<<endl;
    }
};
int main(){
    derived t;
    //t.setA();
    t.getA();
}

