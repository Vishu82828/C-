#include<iostream>
using namespace std;
void pattern (int n){
    for(int i=1; i<=n; i++){
        for(int s=0; s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1; j<=i*2-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for (int i=n; i>=1; i--){
        for(int s=0;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1; j<=i*2-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

}

void patter2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        if(i==n){
            for(int k=n-1;k>=1;k++){
                for(int x=1; x<=n-k;x++){
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
}

int fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int ncr(int a, int b, int d){
    return (a)/((b)*(d));
}
int main (){
    int n,c;
    cout<<"enter number = ";
    cin>>n;
    cout<<"enter number = ";
    cin>>c;
    int a = fact(n);
    int b = fact(c);
    int d = fact(n-c);
    //pattern(n);
    //patter2(n);
    cout<<ncr(a,b,d);
    return 0;
}
