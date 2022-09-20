#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v1;
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;

    v1.push_back(x1);
    v1.push_back(x2);
    v1.push_back(x3);
    v1.push_back(x4);
    sort(v1.begin(),v1.end());
    int max=v1[3];
    cout<<max-v1[2]<<" ";
    cout<<v1[1]-(max-v1[2])<<" ";
    cout<<v1[0]-(max-v1[2])<<endl;
    return 0;
}