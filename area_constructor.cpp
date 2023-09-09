#include<iostream>
using namespace std;
class area{
    public:
    area(){
        cout<<"default area is:"<<endl;
    }
    area(int l,int w){
        cout<<"Rectengle area  is:"<<l*w<<endl;
    }
    area(int l){
        cout<<" Square area is:"<<l*l<<endl;
            }
    area(double b, double h){
        cout<<"triangle area is:"<<0.5*b*h<<endl;
    }
    area(double r){
        cout<<"circle area is:"<<3.14*r*r<<endl;
    }


};
int main()
{
    area d();
    area r(10,20);
    area s(20);
    area t(10,20);
    area c(10);
}

