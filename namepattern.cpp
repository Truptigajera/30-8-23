//trupti
#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout<<"Enter string:";
    cin>>str;

    for(int i=0;str[i]!='\0';i++){

    for(int j=0;j<=i;j++)
    {
        cout<<" "<<str[j];
    }
    cout<<"\n";}
}