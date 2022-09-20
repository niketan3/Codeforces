#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int count=0;
    for (int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int sum=x+y+z;
        if(sum>=2)
        {
         count++;
        }
    }
    cout<<count<<endl;
    return 0;
}