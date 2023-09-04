#include<iostream>
using namespace std;
int main()
{
    int total=0,sum=0,i,a[10];
    for(i=0;i<10;i++){
        cout<<"enter no"<<i;
                cin>>a[i];
   }
   for(i=0;i<10;i++){
    cout<<" "<<a[i];
        if(a[i]%2==0)
        sum=sum+a[i];
        
        else
        total=total+a[i];
   }
   cout<<"\neven sum="<<sum;
   cout<<"\nodd sum="<<total;
}