#include<iostream>
using namespace std;
class area{
    int calc(int a){
        return a*a;
    }
    int calc(int l,int w){
        return l*w;
    }
    double calc(int r,double a){
        return a*r*r;
    }
    double calc(double a,double b, double h){
        return a*b*h;
    }
};
int main(){
    area a;
    cout<<"square area is:"<<a.calc(5)<<endl;
    cout<<"rectangle area is:"<<a.calc(10,15)<<endl;
    cout<<"circle area is:"<<a.calc(10,3.14)<<endl;
    cout<<"triangle area is:"<<a.calc(10,10,0.5)<<endl;
}