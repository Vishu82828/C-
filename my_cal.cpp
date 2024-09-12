// call by refrence
// call by addresh
#include<iostream>
using namespace std;
class cal
{
public:
    void show()
    {
        cout<<" Show "<<endl;
    }
    virtual void add() = 0;
    virtual void sub() = 0;
};
class add : cal
{
public:
    int addition(a,b)
    {
        cout<< "A + B = "<<a+b<<endl;
    }
};
class sub : cal
{
public:
    int subtraction(int *a,int *b)
    {
        cout<< "A - B = "<<a-b<<endl;
    }
};
int main()
{
    add *obj1;

    sub obj2;

    obj1 = &abj2;
}
