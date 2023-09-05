#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter a value:";
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter b value"<<i,j;
            cin>>b[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<" "; 
        }
        cout<<"\t";
        for(j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"\t";
        for(j=0;j<3;j++){
            cout<<a[i][j] + b[i][j]<<" ";
        }
        cout<<"\n";
    }
}