#include<iostream>
using namespace std;
void printTable(int n,int i = 1)
{
    if(i>10) return;
    cout<<n<< " * "<<i<<" = "<<n*i<<endl;
    i++;
    printTable(n,i);
}
int main()
{
    int n;
    cout<<"Which table You want to print : ";
    cin>>n;
    printTable(n);
    //if (cout << "Vishwajeet") {}
}
