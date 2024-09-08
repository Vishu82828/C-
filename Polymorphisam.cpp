//ploymorpism = (i)
#include<iostream>
using namespace std;
class A{
public:
    void show(int x)
    {
        cout<< "SHOW  A "<<endl;
    }
};
class B{
public:
    void show(int x,int y)
    {
        cout<< "SHOW  B "<<endl;
    }
};
int main()
{
    A obj;
    B obj1;

    obj1.show(2,4);

    return 0;
}
