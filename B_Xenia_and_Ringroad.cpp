#include<bits/stdc++.h>
using namespace std;
int main (){
    long long n,m;
    cin>>n>>m;
    long long arr[m];
    int x=1;
    long long time=0;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
        if(arr[i]>x )
        {
            time=time+(arr[i]-x);
            x=arr[i];
        }
        else if(arr[i]<x)
        {
            time=time+n-x+arr[i];
            x=arr[i];
        }
    }
    cout<<time<<endl;
    return 0;
}