#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int j = n-1;
    for(int i=0;i<n/2;i++){
        int temp;
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}

