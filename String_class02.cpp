#include<iostream>
using namespace std;
#include<string.h>
int main(){
    string str = "Hello";
    for(int i=0; i<str.length();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-'a'+'A';
        }
    }
    cout<<str;
}
