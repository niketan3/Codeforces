#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int req;
        ll arr1[n]={0};
        memset(arr1,0,sizeof(arr1));
        bool flag = true;
        for(int i=0;i<n-1;i++)
        {
            // cout<<abs(abs(arr[i])-abs(arr[i+1]))<<" ";
            if(((arr[i])-(arr[i-1]))<0)
            {
                flag=false;
            }
            else if
        }
        
        
        if(flag)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}