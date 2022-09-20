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
int par[2005];
int rank1[2005];
int findpar(int x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = findpar(par[x]);
}
void Union(int a, int b)
{
    a = findpar(a);
    b = findpar(b);
    if (a != b)
    {
        if (rank1[a] < rank1[b])
            swap(a, b);
        par[b] = a;
        if (rank1[a] == rank1[b])
            rank1[a]++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll A[n];
        ll B[n];
        ll sum1=0;
        ll sum2=0;
        for(ll i=0;i<n;i++)
        {
            cin>>A[i];
            sum1+=A[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>B[i];
            sum2+=B[i];
        }
        if(sum1!=sum2)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll opr=0;
            for(int i=0;i<n;i++)
            {
                if(A[i]>B[i])
                {
                    opr+=abs(A[i]-B[i]);
                }
            }
            cout<<opr<<endl;
        }
    }
    return 0;
}