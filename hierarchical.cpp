// # hierarchical Developed by Mr. Ajay Wadekar, Cybrom Indrapuri

#include <iostream>
using namespace std;

class papa {
    public:
    void home2()
    {
        cout<<"This is home method inside dady"<<endl;
    }
};


class son : public papa{
    public:
    void bike()
    {
        cout<<"This is Bike method inside Son"<<endl;
    }

};

class daug : public papa{
    public:
    void makeup()
    {
        cout<<"This is makeup method inside daug"<<endl;
    }

};

int main()
{

    son o1;
    daug o2;


    o1.home2();
    o1.bike();

    o2.home2();
    o2.makeup();



    return 0;
}
