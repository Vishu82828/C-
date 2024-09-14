#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n = 2;
    ofstream obj("file_handling.txt");
    if(obj.is_open()){
        for(int i=1;i<=10;i++){
            cout<< "n"<<"*"<<i<< "="<<n*i<<endl;
        }
        obj.close();
    }else{
        cout<< "this is error";
    }
}
// Q 1 : write a program to enter five different student marks of three different subj(PCM) know cal total of each student and % followed at the end of print the topper name and looser name.
// Ans - Student 1 : P=44, C=47, M=50, Total = 141, percentage = 43%.
// Q 2 : enter count of Distance in cm.
// Answer : Total cm - 100 cm, Total inch - 100/2.54 inch, Total meter - 100/100 meter, Total feet - 100/12 feet, Total KiloMeter - 100/1000 km.
