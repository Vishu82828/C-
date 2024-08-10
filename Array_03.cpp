#include<iostream>
using namespace std;
void three_largest(int n){
    int arr[n];
    for(int i=0;i<=n; i++){
        cin>>arr[i];
    }
    int f_largest, s_largest, t_largest;
    f_largest = s_largest = t_largest = INT_MIN;

        for(int i=0;i<=n;i++)
        {
                if(arr[i]>f_largest)
                {
                    t_largest = s_largest;
                    s_largest = f_largest;
                    f_largest = arr[i];
                }
                else if(arr[i]>s_largest && arr[i]!=f_largest)
                {
                    t_largest = s_largest;
                    s_largest = arr[i];
                }
                else if (arr[i]>t_largest && arr[i] != s_largest && arr[i] != f_largest)
                {
                    t_largest = arr[i];
                }
    }
    cout<<"Largest first number in array = " <<f_largest<<" Second Largest = "<<s_largest<< "Third Largest = "<<t_largest;
}
int main(){
    int n;
    cout<<"enter array = ";
    cin>>n;
    three_largest(n);
}
