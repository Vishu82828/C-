#include<iostream>
using namespace std;
class survi
{
    int num1;
    int num2;
    int num3;

public:
    survi(int a,int b,int c)
    {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    void show()
    {
        cout<<num1<<" "<<num2<< " "<<num3<<endl;
    }
    survi operator /(survi &temp)
    {
        survi hi(0,0,0);
        hi.num1 = (num1 > temp.num1 || num1 < temp.num1) ? (num1):(temp.num1);
        hi.num2 = (num1 > temp.num2 || num1 < temp.num2) ? (num2):(temp.num2);
        hi.num3 = (num1 > temp.num3 || num1 < temp.num3) ? (num3):(temp.num3);
        return hi;
    }
};
int main()
{
    survi obj1(2,1,6);
    survi obj2(3,4,7);
    survi obj3(11,13,15);
    survi obj4(0,0,0);
    obj4 = obj1 / obj2 / obj3;
    obj4.show();
}
