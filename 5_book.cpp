#include<iostream>
using namespace std;
class book
{
    int bookno;
    char bookname[20];
    float price;
    int bookcopies;
    float total;

    float total_cost()
    {
        return bookcopies * price;
    }
    public:
    void purchase()
    {
        cout<<"enter book No:";
        cin>>bookno;
        cout<<"book name :";
        cin>>bookname;
        cout<<"book copies :";
        cin>>bookcopies;
        cout<<"boof price :";
        cin>>price;

        total=total_cost();
    }
    void displaydata()
    {
        cout<<"book no:"<<bookno<<endl;
        cout<<"book name :"<<bookname<<endl;
        cout<<"book copies :"<<bookcopies<<endl;
        cout<<"book price:"<<price<<endl;
        cout<<"total :"<<total<<endl;
    }
};

int main()
{
    book p;
    p.purchase();
    p.displaydata();
}