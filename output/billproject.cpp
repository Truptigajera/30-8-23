#include<iostream>
using namespace std;
class cosmetic{
    public:
    string name;
    int Mobile,qty[10],bill=0,disc,price[10],grossbill=0;

    float sgst,cgst,GST,netbill=0;
    string items[10];

    void menu(){
        cout<<"<--------------------KAILASH BEATY CARE---------------->"<<endl;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter Mobile no:";
        cin>>Mobile;
        cout<<"\n-------------------------Menu-------------------------";
        cout<<"\n1.lakme kajal"<<"\t\t\t\t\tRs.160/-";
        cout<<"\n1.lakme compack"<<"\t\t\t\t\tRs.240/-";
        cout<<"\n1.nainpolish"<<"\t\t\t\t\tRs.50/-";
        cout<<"\n1.primer"<<"\t\t\t\t\tRs.180/-";
        cout<<"\n1.cleaner"<<"\t\t\t\t\tRs.210/-";
        cout<<"\n       0.confirm order\n\n";

    }

    void customer(){
        cout<< "Enter your Name:"<<name<<endl;
        cout<<"Enter mobile no:"<<Mobile<<endl;
    }
    int item1(){
    cout<<"----->Enter qty:";
    cin>>qty[0];
    items[0]="\tlakme kajal          Rs.160/-";
    price[0]=qty[0]*160;
    return bill=bill+price[0];}

    int item2(){
    cout<<"----->Enter qty:";
    cin>>qty[1];
    items[1]="\tprimer                Rs.180/-";
    price[1]=qty[1]*160;
    return bill=bill+price[1];
    }
    int Gross()
    {
        return grossbill=grossbill+bill;
    }

    int DISCOUNT()
    {
        if(grossbill>500){
            return disc=(grossbill*5/100);
        }
    }
    int CGST()
    {
        return cgst=(grossbill*2.5)/100;
    }
    int SGST()
    {
        return sgst=(grossbill*2.5)/100;
    }
    int displaygst()
    {return GST=cgst+sgst;}
    int Net()
    {
        return netbill=grossbill-disc+GST;
    }
    void displayitems(){
        int i;
        for(i=0;i<10;i++){
            if(!items[i].empty()){
                cout<<i+1<<" : "<<items[i]<<"\t"<<qty[i]<<"\t\t"<<price[i]<<"/-"<<endl;
            }
        }
    }
    void display()
    {
        cout<<"\n<--------------------KAILASH BEATY CARE---------------------->";
        cout<<"\ncustomer name                   :"<<name<<endl;
        cout<<"\ncustomer mobile no              :"<<Mobile<<endl;
        cout<<"---------------order list----------------------------------------";
        cout<<"\nNo\tITEMS\tRATE\t\tQTY\tAMT"<<endl;
    }
};
int main(){
    cosmetic x;
    int ch;
    x.menu();

    do{
        cout<<"enter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
            x.item1();
            break;
            case 2:
            x.item2();
            break;
            case 0:
            cout<<"your order comfirmed.\n";
            break;
            default:
            cout<<"sorrry! please try again.\n";
            break;
        }

    }while(ch!=0);
    x.display();
    x.displayitems();
    cout<<"--------------------------------------------------------------------------------------------";
    cout<<"\t\t\t\t\t\t\t\tGross Bill  :"<<x.Gross()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\\Discount :"<<x.DISCOUNT()<<"/-"<<endl;
    cout<<"\n\t\t\t\t\t\tCGST         :"<<x.CGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tSGST       :"<<x.SGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  GST        :"<<x.displaygst()<<"/-"<<endl;
    cout<<"---------------------------------------------------------------------------------------------";
    cout<<"\t\t\t\t\t\t\t\t          NET BILL  :"<<x.Net()<<"/-"<<endl;
    cout<<"==============================================================================================";
    cout<<"\n\t\t Thank You ";
}