//:- its save memory and time,its it used for reusablity

//*there are two type of function :-
//(i) pre-defined
//(ii) user-drfined

//* user defined function are two type -
//(i)function that return value
//(ii)function does not return value
//{with parameter or without parameter}

#include<iostream>
using namespace std;
void show()//no return & without parameter
{

    cout<<"Welcome\n";
}
void sum(int a, int b)//no return with parameter!, (int a, int b) is formal parameter
{

    cout<<a+b;
}
int main()
{

    show();//explicit calling
    sum(4,5);//(4,5)is actual parameter, it also know as Argument
}

// parameter are two type :-
//(i) Actual parameter
//(ii) Formal Parameter

// Function can call by two method :-
//(i) Implicit
//(ii) Explicit
