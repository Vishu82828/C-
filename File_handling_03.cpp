#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream obj("xyz.txt");
    string str;
    if(obj.is_open()){
        while(getline(obj,str)){
            cout<<"Show Data = "<<str<<endl;
        }

        obj.close();
    }
    else{
        cout<<"there is error";
    }

    return 0;
}
