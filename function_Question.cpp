#include <iostream>
using namespace std;
void deposite (int pasword, int amount)
{
    if (pasword == 1234){
        if(amount<0){
            cout<<"please enter valid amount";
        }else{
        cout<<amount+1000;
        }
    } else {
    cout<<"wrong pasword";
    }
}

int main()
{
    int amount,pasword;
    cout<<"please enter pasword";
    cin>>pasword;
    cout<<"please enter amount";
    cin>>amount;
    deposite(pasword,amount);
}
