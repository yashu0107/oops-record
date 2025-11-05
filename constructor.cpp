#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"constructor called!"<<endl;
    }
    ~student(){
        cout<<"destructor called!"<<endl;
    }
    void display(){
        cout<<"inside dispaly function"<<endl;
    }
};
int main(){
    cout<<"creating object d1"<<endl;
    student s1;
    s1.display();
    cout<<"exiting main ..."<<endl;
    return 0;
}