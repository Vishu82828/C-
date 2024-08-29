#include<bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int,int> x = {2,4};
    cout <<"First Pair = "<< x.first <<" "<<x.second<<endl;

    pair<int, pair<int,int>> y = {4,{6,8}};
    cout << "Second Pair = "<<y.first<< " "<<y.second.first<< " "<<y.second.second<<endl;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout<< "Third Pair = "<<arr[0].second<< " "<<arr[1].second<< " "<<arr[2].second;
}
int main(){
    explainPair();
}
