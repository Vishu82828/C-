#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ofstream myfile("example.txt");
    //myfile<<"this is test run"<<endl;
    //myfile.close();

    ifstream read_myfile("example.txt");
    string line;
    while(getline(read_myfile,line)){
        cout<<line<<endl;
    }
    read_myfile.close();
}
