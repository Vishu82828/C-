//OOps - it is having four pillers - (i)- Encapsulation (ii)- Abstraction (iii)- Inheritence (iv)- polymorophasim
//class - class is a container of deta member and member function. also call user define deta type.
//Object - real world entity that take space. or object is Instance(originate) of a class or blue print of an Object.
//there are three modifier in the class
//(i) - Private, (ii) - Public, (iii) - Protectected.
#include<iostream>
using namespace std;
class cybrom
{
public:int a,b;
void print()
{
    cout<<"hello Object"<<endl;
}
} ;
int main()
{
    cybrom obj;
    //cout<<sizeof(obj);
    obj.a=90;
    cout<<obj.a<<endl;
    obj.print();
}
// class is a container of data member and data function  / class is a user defined data type. where dtata member tell us behaviour of dtata function. a class is a blue print of object.
