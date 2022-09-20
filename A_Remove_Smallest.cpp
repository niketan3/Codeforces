#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int a=1;
        for (int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]>1)
            {
                a=0;
                break;
            }
        }
        if(a==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}