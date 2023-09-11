#include<iostream>
using namespace std;
class volume{
    public:
    volume(){
        cout<<"default constructor is called..."<<endl;
    }
    volume(double l,double h,double w){
        cout<<"cuboid volume is:"<<l*h*w<<endl;
    }
    volume(int l){
        cout<<"cube volume is:"<<l*l*l<<endl;
            }
    volume(int r, int h){
        cout<<"cylinder volume is:"<<r*r*h<<endl;
    }

};
int main()
{
    volume a(5,10,20), b(5), c(10,10);
}