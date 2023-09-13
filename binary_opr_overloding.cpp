#include<iostream>
using namespace std;
class box{
    int l,b,h;
    public:
    void setdata(int x, int y,int z){
        l=x,b=y,h=z;
    }
    int getvolume(){
        return l*b*h;
    }
    box operator+ (box &n){
        box t;
        t.l=l+n.l;
        t.b=b+n.b;
        t.h=h+n.h;
        return t;
    }
};
int main(){
    box b1,b2,b3;
    b1.setdata(2,3,4);
    cout<<"volume of box b1 is:"<<b1.getvolume()<<endl;
    b2.setdata(3,4,5);
    cout<<"volume of box b2 is:"<<b2.getvolume()<<endl;
    b3=b1+b2;
    cout<<"volume of box b3 is:"<<b3.getvolume()<<endl;
}