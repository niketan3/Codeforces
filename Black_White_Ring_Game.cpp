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
        cin >> n;
        int arr[n];
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if(n<=2)
        {
            cout<<"Bob\n";
            continue;
        }
        string s = "";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 and one != 0)
            {
                s = s + '1';
                one--;
            }
            else if (one == 0 and i % 2 == 0)
            {
                s = s + '0';
                zero--;
            }
            if (zero != 0 and i % 2 == 1)
            {
                s = s + '0';
                zero--;
            }
            else if (zero == 0 and i % 2 == 1)
            {
                s = s + '1';
                one--;
            }
        }
        // cout<<s<<endl;
        int cnt=0;
        int cnt1=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                cnt++;
            }
            if(arr[i]!=arr[i+1])
            {
                cnt1++;
            }
        }
        if(s[0]!=s[n-1])
        {
            cnt++;
        }
        if(arr[0]!=arr[n-1])
        {
            cnt1++;
        }
        // cout<<cnt<<" "<<cnt1<<endl;
        int diff=cnt-cnt1;
        diff=diff/2;
        if(diff%2)
        {
            cout<<"Alice\n";
        }
        else
        {
            cout<<"Bob\n";
        }
    }
    return 0;
}