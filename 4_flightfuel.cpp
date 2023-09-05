#include<iostream>
using namespace std;
class flightfuel
{
    int flightno;
    char destination[20];
    float fuel,distance;

    float CALFUEL(){
        float fuel=0;
        if(distance<=1000)
        fuel=500;
        else if(distance>1000 && distance<=2000)
        fuel = 1100;
        else
        fuel=2200;
        return fuel;
    }
    public:
    void FEEDINFO()
    {
        cout<<"flight number-";
        cin>>flightno;
        cout<<"destination-";
        cin>>destination;
        cout<<"distance-";
        cin>>distance;
        //cout<<"fuel-"<<fuel<<endl;

        fuel=CALFUEL();
    }
    void SHOWINFO()
    {
        cout<<"flight number-"<<flightno<<endl;
        cout<<"dwstination-"<<destination<<endl;
        cout<<"distance-"<<distance<<endl;
        cout<<"fuel -"<<fuel<<endl;
    }
};
int main()
{
    flightfuel p;
    p.FEEDINFO();
    p.SHOWINFO();
}

