#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;

    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        cout<<"\t"<<i<<"";
    }
        cout<<"\n1 to 10 total is:"<<sum;
}