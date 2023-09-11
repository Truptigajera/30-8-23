#include<iostream>
using namespace std;
class volume{
    public:
    int calc(int a){
        return a*a*a;
    }
    int calc(int l,int h,int w){
        return l*h*w;
    }
    double calc(double a, int r, int h){
        return a*r*r*h;
    }
};
int main(){
    volume a;
    cout<<"cube volume is:"<<a.calc(5)<<endl;
    cout<<"cuboid volume is:"<<a.calc(5,2,10)<<endl;
    cout<<"cube volume is:"<<a.calc(3.14,10,5)<<endl;

    
}