#include<iostream>
using namespace std;
void arr(int [n])


int main(){
    int arr[5];
    for(int i=0;i<=5;i++){
        cin>>arr[i];
    }
    int largest = 0;
    for(int i=0;i<=5;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }
    cout<<largest;
}
