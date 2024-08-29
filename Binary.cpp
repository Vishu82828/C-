// binary search must have shorted array;

#include<iostream>
using namespace std;
int BinarySearch(int arr[],int item, int size)
{
    int low = 0;
    int high = size-1;
    int mid = (low+high)/2;
    while(low<=high){
            mid=(low+high)/2;
        if(arr[mid]==item){
            return mid;
        }
        if(item>arr[mid]){
            low = mid+1;
        }
        if(item<arr[mid]){
            high =mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10,20,30,40,60,70};
    int item = 70;
    int position = BinarySearch(arr,item,6);
    if(position==-1){
        cout<<"serching unsuccessful";
    }else {
        cout<< "element are found at position = "<<position;
    }
    return 0;
}
