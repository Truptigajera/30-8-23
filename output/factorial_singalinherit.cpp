 #include<iostream>
using namespace std;
class num{
    protected:
    int i,fact=1;
    public:
    void setA(){
         
        for(i=1;i<=5;i++){
            fact=fact*i;
            cout<<"no:"<<i<<endl;
        }
    }
};
class factorial : public num{
    
    public:
    void getA(){
        

        cout<<"Factorial is:"<<fact;
    }
};
int main()
{
    factorial r;
    r.setA();
    r.getA();
}