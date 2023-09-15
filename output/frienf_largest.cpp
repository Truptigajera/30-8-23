#include<iostream>
 using namespace std;

 class large{
    private:
    int x,y;
    public:

    void setdata(){
        cout<<"enter two number:";
        cin>>x>>y;
    }
    friend void getarea(large t);
 };
 void getarea(large t){
     
    cout<<"largest no is:"<<((t.x > t.y) ? t.x : t.y)<<endl;
}
   /* if(t.x>t.y){
        cout<<"largest no:"<<t.x;
    }
    else{
        cout<<"largest no:"<<t.y;
    }*/
 
 int main(){
    large t;
    t.setdata();
    getarea(t);
    
 }

   