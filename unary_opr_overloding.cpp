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
    box operator-- (int){
        box t;
        t.l=l--;
        t.b=b--;
        t.h=h--;
        return t;
    }
};
int main(){
    box b1;
    b1.setdata(2,3,4);
    cout<<"volume of box b1 is:"<<b1.getvolume()<<endl;
    //++b1;         //3 4 5
    b1--;

    
    cout<<"new volume of box b1 is:"<<b1.getvolume()<<endl;
    
}