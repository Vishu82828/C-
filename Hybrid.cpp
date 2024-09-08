// MBBS problem - is a property or error which can accessable to diffrent class equaly.
// Multiple
#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<< "Const A"<<endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout<< "Const B"<<endl;
    }
};

class C : public A
{
public:
    C()
    {
        cout<< "Const C"<<endl;
    }
};

class D : public B, public C
{

};

int main(){
    D obj1;
}
