#include<iostream>
using namespace std;
class Cybrom
{
    int a, b, c;
public:
    void sum(){
        cout<<"hello khusi"<<endl;
    }
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
};
int main()
{

    Cybrom c;
    c.sum();
    c.sum(2,4);
    c.sum(2,4,6);
    cout<<"size = "<<sizeof(c);
}

