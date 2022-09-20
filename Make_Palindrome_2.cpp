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
        string s;
        cin>>s;
        int one=0;
        int zero=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        // cout<<zero<<" "<<one<<endl;
        if(zero>one)
        {
            for(int i=0;i<zero;i++)
            {
                cout<<'0';
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<one;i++)
            {
                cout<<'1';
            }
            cout<<endl;
        }
    }
    return 0;
}