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
        vector<ll>v;
         int arr[101]={0};
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            arr[x]++;
            v.push_back(x);
        }
        for(int i=1;i<101;i++)  
        {
            arr[i]=arr[i-1]+arr[i];
            // cout<<arr[i]<<endl;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            int x=arr[v[i]];
            int y=n-x;
            if(x>y)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}