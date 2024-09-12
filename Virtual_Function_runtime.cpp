#include<iostream>
using namespace std;
class abc
{
public:
    void virtual show()
    {
        cout<<"abc";
    }
};
class xyz : public abc
{
public:
    void show()
    {
        cout<<"xyz";
    }
};
int main()
{
    abc *obj1;
    xyz obj2;
    obj1 = &obj2;
    obj1->show();
}
