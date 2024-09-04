// constructor - a constructor is a special type of function(method) if the function follow the following property.
//i - the constructor name or class name be same.
//ii - there is no return type in a constructor.
//iii - when-ever we create the object of class the constructor will call automaticily
// iv - there is only one constructor in one class.
// Three Type of Constructor => i - Default constructor, ii - Parametarie Constructor, iii - Copy Constructor(**) - it take same value what-ever we pass in Parametarie constructor
#include<iostream>
using namespace std;
class abc
{
public:
    //void show()
    //{
    //    cout<<"vishwajeet"<<endl;
    //}

    //Parametarie Constructor
    //abc(int s){
    //    cout<<"value = "<<s<<endl;
    //}

    //Copy Constructor
    abc ()
    {
        cout<<"original"<<endl;
    }
    int order;
    abc (int a)
    {
        order = a;
        cout<<"order = "<<order<<endl;
    }

    abc(abc &c)
    {
        int o = c.order;
        cout<< "Copy Constructor = "<<o<<endl;
    }
};
int main()
{
    //abc name;
    //name.show();
    //abc obj(45),obj2(78);

    abc obj1();
    abc obj(45);
    abc vishu(obj);

    return 0;
}
