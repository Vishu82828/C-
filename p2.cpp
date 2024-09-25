#include<iostream>
using namespace std;
class ractangle
{
private:
    float length;
    float width;
public:
    ractangle(float l,float w):length(l),width(w){}
    void area();
    void perimeter();
};

void ractangle::area(){
    cout<<"Area of Ractangle : "<<length*width<<endl;
}

void ractangle::perimeter(){
    cout<<"Perimeter of Ractangle : "<<2*(length+width);
}

int main()
{
    ractangle obj(2,4);
    obj.area();
    obj.perimeter();
}
