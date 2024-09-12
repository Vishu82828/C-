// Pure Virtual.
#include<iostream>
using namespace std;
// In-complete Class
class hospital
{
public:
    void show()
    {
        cout<<"Hospital show call"<<endl;
    }
    virtual void medical() = 0;

};
// Concreate
class medi : public hospital
{
public:
    void medical()
    {
        cout<< "Medical call called"<<endl;
    }
};
int main()
{
    medi obj;
    obj.show();
    obj.medical();
}
