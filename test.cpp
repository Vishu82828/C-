#include<iostream>
using namespace std;
int main(){
    int a=90;
    int b=-4;
    int c=-34;
    a=--c;
    c=b++;
    b=++a;
    cout<< "a = "<<--a;
    cout<< "b = "<<--b;
    cout<< "c = "<<c;
}
