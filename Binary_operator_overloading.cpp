// # Developed by Mr. Ajay Wadekar, Cybrom Indrapuri

#include <iostream>
using namespace std;

class abc{
    public:
    int x;
    abc(int a)
    {
        x =a;
    }
    void show()
    {
        cout<<"ans is "<<x<<endl;
    }

    abc operator *(abc temp)
    {
        x = x + temp.x;
    }

};

int main()
{
    abc ob1(23);
    abc ob2(22);


    ob1 * ob2;

    ob1.show();
    ob2.show();


    return 0;
}
