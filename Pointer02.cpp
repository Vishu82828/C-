#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int a = 2;
    int b = 4;

    int *aptr = &a;
    int *bptr = &b;
    swap(aptr,bptr);
    cout<<a<<" "<<b;
}
//if a class more than one name by using diffreant parameter is call function overloading class.

