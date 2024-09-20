#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter First no = ";
    cin>>a;
    cout<<"Enter Second no = ";
    cin>>b;
    cout<<"Swaping First and Second :"<<endl;
    a = a+b;
    b =a-b;
    a =a-b;
    cout<<"Updated no : "<< "\n First no = "<<a<< "\n Second no = "<<b<<endl;
}
