//10010101
#include<iostream>
using namespace std;
int main()
{
    int i=1,a=1;
    do{
        int j=1;
        while(j<=i){
            if(a%2==0)
            cout<<"0 ";
            else
            cout<<"1 ";
            a++;
            j++;
        }
        cout<<"\n";
        i++;
    }while(i<=5);
}