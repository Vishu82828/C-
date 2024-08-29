// liner search is a sequential serching algorithm where we start from one end and check every  .

#include<iostream>
using namespace std;

int linerSearch(int arr[],int item, int size)
{
    int found = -1;
for(int i=0;i<size;i++){
    if(arr[i]==item){
        found = i+1;
    }
}
}

int main()
{
    int arr[] = {100,56,200,78,300,23,79,45};
    int item = 45;
    int position = linerSearch(arr,item,8);
    if(position==-1){
        cout<<"serching unsuccessful";
    }else {
        cout<< "element are found at position = "<<position;
    }
    return 0;
}
