#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for (int i=0;i<n;i++) 
        {
            cin>>arr[i];
        }
        int min=0;
        int flag=0;
        for (int i=0;i<n;i++)
        {
            if(arr[i]<x)
            {
                flag=1;
                min=i;
            }
        }
        if(flag==1)
        {
            cout<<min+1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}