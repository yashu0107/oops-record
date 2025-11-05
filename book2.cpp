#include<iostream>
using namespace std;
class book
{
    private:
    int accno,pages;
    char author[50],bookname[50],isbno[50];
    float price;
    public:
    void getdata()
    {
        cout<<"enter the book name:";
        cin>>bookname;
        cout<<"enter the author name:";
        cin>>author;
        cout<<"enter the book price :";
        cin>>price;
        cout<<"number of pages:";
        cin>>pages;
        cout<<"enter the account number:";
        cin>>accno;
        cout<<"enter the isbno:";
        cin>>isbno;
}
     void display()
     {
        cout<<"\nbook acc no:"<<accno;
        cout<<"\nBook name:"<<bookname;
        cout<<"\nBook isbno:"<<isbno;
        cout<<"\nno.of pages:"<<pages;
        cout<<"\nprice of the book:"<<price;
        cout<<"\nauthor name:"<<author;
     }
};
int main()
{
book b[10];
int i=0,n;
cout<<"enter the number of value of n:";
cin>>n;
for(i=0;i<n;i++)
b[i].getdata();
for(i=0;i<n;i++)
b[i].display();
}

