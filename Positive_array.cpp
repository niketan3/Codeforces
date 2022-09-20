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
        map<int,int>m;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        for(auto x:m)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        int re=0;
        int arr=0;
        for(auto x:m)
        {
            x.second=x.second-re;
            x.second=x.second-arr*(x.second)
            int temp=max(0,(x.second)/(x.first));
            re=x.first-((x.second)%(x.first));         
        }
    }
    return 0;
}