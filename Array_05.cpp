#include<iostream>
using namespace std;
void user_input(int n){
    int arr[n];
    for(int i=0; i<=n; i++){
        cin>>arr[i];
    }

    int first, second, third, fourth, fifth, sixth;
    first = second = third = fourth = fifth = sixth = INT_MIN;

    for(int i=0; i<=n; i++){
        if(arr[i]>first)
        {
            sixth = fifth;
            fifth = fourth;
            fourth = third;
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i] != first)
        {
            sixth = fifth;
            fifth = fourth;
            fourth = third;
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third && arr[i] != first && arr[i] != second)
        {
            sixth = fifth;
            fifth = fourth;
            fourth = third;
            third = arr[i];
        }
        else if(arr[i]>fourth && arr[i] != first && arr[i] != second && arr[i] != third)
        {
            sixth = fifth;
            fifth = fourth;
            fourth = arr[i];
        }
        else if(arr[i]>fifth && arr[i] != first && arr[i] != second && arr[i] != third && arr[i] != fourth)
        {
            sixth = fifth;
            fifth = arr[i];
        }
        else if(arr[i]>fifth && arr[i] != first && arr[i] != second && arr[i] != third && arr[i] != fourth && arr[i] != fifth)
        {
            sixth = arr[i];
        }
    }
    int k;
    cout<< "Enter which Largest number from Array you want = ";
    cin>>k;
    for(int j = 0;j<k;j++){

    }
    switch (k){
        case 1:
            cout<<first;
            break;
        case 2:
            cout<<second;
            break;
        case 3:
            cout<<third;
            break;
        case 4:
            cout<<fourth;
            break;
        case 5:
            cout<<fifth;
            break;
        case 6:
            cout<<sixth;
            break;
        default:
            cout<< "Error ! -  Please enter from 1 to 6 Largest only";
    }
}
int main(){
    int n;
    cout<<"Enter size of Array = ";
    cin>>n;
    user_input(n);
}
