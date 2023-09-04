#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a and b,c:";
    cin>>a>>b>>c;
    //c=a<b?a:b;
  // cout<<" largest no."<<((a>b)&&(a>c)?a:(b>c)?b:c); //lader
  cout<<"largest no is:"<<(a>b?(a>c?a:c):(b>c?b:c));
}