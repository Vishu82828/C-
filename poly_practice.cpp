#include<iostream>
using namespace std;
class A{
public:

    void show(int x, double y)
    {
        cout<<"Int = "<<x<< "Double = "<<y<<endl;
    }

    void show(double x, double y)
    {
        cout<<"Double = "<<x<< "Double = "<<y<<endl;
    }

    void show(double x, int y)
    {
        cout<<"Double = "<<x<< "Int = "<<y<<endl;
    }

    void show(int x, int y)
    {
        cout<<"Int = "<<x<< "Int = "<<y<<endl;
    }
};

class abc{

    public:
    int age;

    abc(int a)
    {
        age = a;
    }

    void operator ++()
    {
        age  = age *2;
    }

    void show()
    {
        cout<<"Your age is "<<age<<endl;
    }

};
int main(){
    //A obj;
    //obj.show(2,2.4);

    abc obj(30);

    ++(obj);
    obj.show();

    return 0;
}
