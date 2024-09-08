#include<iostream>
using namespace std;
class papa
{
public:
    void home()
    {
        cout<<"this is home method"<<endl;
    }
};

class mom
{
public:
    void everyThing()
    {
        cout<<"this is mom method"<<endl;
    }
};

class son : public papa,public mom
{
public:
    void bike()
    {
        cout<<"this is son method"<<endl;
    }
};
int main()
{
    papa obj1;
    mom onj2;
    son obj3;

    obj3.home();
    obj3.bike();
    obj3.everyThing();
    return 0;
}
