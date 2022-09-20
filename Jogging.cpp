#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
const int M=1e9+7;
ll tem(ll a,ll b)
{
    if(b==0)
    {
        return 1LL;
    }
    else
    {
        ll rada=tem(a,b/2);
        if(b&1)
        {
            return ((a*(((rada*1LL*rada)%M))))%M;
        }
        else
        {
            return (rada*1LL*rada)%M;
        }
    }
}
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        cout<<x*(tem(2,n-1))%M<<endl;
    }
    return 0;
}