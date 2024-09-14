#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream obj("abc.txt");
    if(obj.is_open())
    {
        obj<<"this is file handling";
        obj.close();
    }else {
        cout<< "this is error";
    }

    return 0;
}
