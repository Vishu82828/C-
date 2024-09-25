#include<iostream>
using namespace std;
class circle
{
private:
    float radious;
    float PI = 3.14;
public:
    circle(int n):radious(n){}
    void circumference ();
    void area();
};

void circle :: circumference(){
    cout<<"Circumference of circle : "<<2*PI*(radious*radious)<<endl;
}

void circle :: area(){
    cout<<"Area of circle : "<<PI*(radious*radious)<<endl;
}

int main()
{
    circle obj(9);
    obj.area();
    obj.circumference();

    return 0;
}
