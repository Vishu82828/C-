#include<iostream>
using namespace std;
class abc
{
    int num1;
    int num2;
public:
    abc(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void show()
    {
        cout<<"Addition of first line = "<<num1<<"\n"<<"Addition of second line = "<<num2<<endl;
    }
    abc operator /(abc &obj)
    {
        abc temp(0,0);
        temp.num1 = (num1 > obj.num1) ? (num1):(obj.num1);
        temp.num2 = (num2 > obj.num2) ? (num2):(obj.num2);

        return temp;
    }
};
int main()
{
    abc obj(12,3);
    abc obj2(5,19);
    abc obj3(0,0);
    obj3 = obj / obj2;
    obj3.show();
}
