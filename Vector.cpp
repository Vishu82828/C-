#include<bits/stdc++.h>
using namespace std;
void explainVector()
{
    //vector<int>v(2,5);
    //v.push_back(6);
    //v.emplace_back(7);
    vector<pair<int, int>> vec;
    vec.push_back({2,3});
    vec.emplace_back(8,9);


    //for(auto it : vec){
      //  cout<<it<< " ";
    //}
    cout<<vec[0].first<<vec[0].second<<vec[1].first;

}
int main ()
{
    explainVector();
}
