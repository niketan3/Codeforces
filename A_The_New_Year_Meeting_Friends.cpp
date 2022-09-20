#include<bits/stdc++.h>
using namespace std;
int main (){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    vector<int>v1;
    int sum1=abs(x2-x1)+abs(x3-x1);
    int sum2=abs(x3-x2)+abs(x1-x2);
    int sum3=abs(x2-x3)+abs(x1-x3);
    v1.push_back(sum1);
    v1.push_back(sum2);
    v1.push_back(sum3);
    sort(v1.begin(),v1.end());
    cout<<v1[0]<<endl;
    return 0;
}