#include<iostream>
using namespace std;
class addObject
{
private:
    int real;
    int imag;
public:
    addObject(int r,int i):real(r),imag(i){}
    void show()
    {
        cout<<"Real : "<<real<<" + "<<"Imaginary : "<<imag<<"x"<<endl;
    }
    addObject operator /(addObject &obj)
    {
        addObject temp(0,0);
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }
    void line ()
    {
        for(int i=0;i<26;i++)
        {
            cout<<"-";
        }
        cout<<endl;
    }
};

int main()
{
    addObject obj(4,8);
    addObject obj2(2,5);
    obj.show();
    obj2.show();
    obj.line();
    addObject obj3(0,0);
    obj3 = obj / obj2;
    obj3.show();

}
