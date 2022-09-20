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
        int s;
        cin>>s;
        string str="";
        if(s<=9)
        {
            cout<<s<<endl;
            continue;
        }
        int n=min(s,9);
        int req=s;
        while(true)
        {   
            if(req<=n)
            {
                str=to_string(req)+str;
                break;
            }
            else
            {
                str=to_string(n)+ str;
                req=req-n;
                n--;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}