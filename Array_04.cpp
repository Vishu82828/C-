#include<iostream>
using namespace std;
void secondLargest(int n){
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int first, second;
    first = second = INT_MIN;
    for(int i=0;i<=n;i++){
        if(arr[i]>first){
            first= arr[i];
        } else if(arr[i]>second && arr[i] < first){
            second = arr[i];
        }
    }
    cout<< "Second largest element in Array is = "<<second;
}
int main(){
    int n;
    cout<< "Enter Size of Array = ";
    cin>> n;
    secondLargest(n);
}
