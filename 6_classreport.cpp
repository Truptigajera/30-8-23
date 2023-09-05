#include<iostream>
using namespace std;
class REPORT
{
	int adno;
	char name[20];
	float a[5];
	float average;
	void GETAVG()
	{
		average = (a[0]+a[1]+a[2]+a[3]+a[4])/5;
	}
public:
	void READINFO()
    {
        cout<<"admin no:";
        cin>>adno;
        cout<<"student name:";
        cin>>name;
        cout<<"enter marrks in:";
        for(int i=0;i<5;i++)
        {
            cout<<"subject :"<<i+1<<":";
            cin>>a[i];
        }
        average = (a[0]+a[1]+a[2]+a[3]+a[4])/5;

    }
	void DISPLAYINFO()
    {
        cout<<"admin no:"<<adno<<endl;
        cout<<"student name :"<<name<<endl;
        cout<<"marks are:"<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
        cout<<"Average :"<<average<<endl;
    }
	 	
};       
int main()
{
	REPORT r;
	r.READINFO();
	r.DISPLAYINFO();
	
	
}
