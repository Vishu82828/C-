#include<bits/stdc++.h>
using namespace std;
template<class T>

// template in c++ programing = templates are foundation of generic progamming
// which involves writing code in a way that is independent of perticular type.
// A template is a blue print or formula fro creating a genric class or functions.
// Genric type is the type of data that take input, liner stack que searching shorting.Array Stack Queue Linked LIst Searching Sorting Time and Space Complexity
Tcompare(T a,T b)
{
    if(a>b){
        return a;
    }else {
        return b;
    }
}

int compare(int a,int b)
{
    if(a>b){
        return a;
    }else {
        return b;
    }
}
float compare (float a, float b)
{
    if(a>b){
        return a;
    }else {
        return b;
    }
}
double compare (double a, double b)
{
    if(a>b){
        return a;
    }else {
        return b;
    }
}
char compare (char a, char b)
{
    if(a>b){
        return a;
    }else {
        return b;
    }
}

int main()
{
    int i1=10;
    int i2 = 20;
    cout<<"compare tow integer : "<<compare(i1,i2);
    float f1=15.6;
    float f2 = 8.1;
    cout<<"\n compare tow float : "<<compare(f1,f2);
    double d1 = 1.2;
    double d2 = 1.9;
    cout<<"\n compare tow double : "<<compare(d1,d2);
    char ch1 ='a';
    char ch2= 'A';
    cout<<"\n compare tow char : "<<compare(ch1,ch2);

    return 0;
}
