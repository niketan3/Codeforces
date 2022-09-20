#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int cnt=INT16_MAX;
void solve(int arr[],int n,int sum,int c,int i,int j)
{
    
    if(sum<n)
    {
        return;
    }
    if(sum==n)
    {
        if(c<cnt)
        {
            cnt=c;
        }
        return ;
    }
    else
    {
        solve(arr,n,sum-arr[i],c+1,i+1,j);
        solve(arr,n,sum-arr[j],c+1,i,j-1);
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        int i=0;
        int j=n-1;
        if(sum<x)
        {
            cout<<-1<<endl;
        }
        else
        {
            solve(arr,x,sum,0,i,j);
            cout<<cnt<<endl;
            cnt=INT16_MAX;
        }
    }
    return 0;
}