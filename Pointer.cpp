#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int y =4;
    int* p;
    p = &x;
    p= &y;
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<p;
}
