#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for (int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int temp=0;
    int i=1;
    while(i<=t)
    {
        if(i==t)
        {
            break;
        }
        temp=i+arr[i];
         i=temp;
       
    }
    if(temp==t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}