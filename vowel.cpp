#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter ch:";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u')
    cout<<""<<ch<<" is vowel."<<ch;

    else 
    cout<<""<<ch<<" is consonant."<<ch;
}