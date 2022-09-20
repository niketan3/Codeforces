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
    int n;
    cin>>n;
    int zero=0;
    int five=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            zero++;
        }
        else
        {
            five++;
        }
    }
    if( five>8 and zero>0)
    {
        string s;
        five=9*(five/9);
        for(int i=0;i<five;i++)
        {
            s+='5';
        }
        for(int i=0;i<zero;i++)
        {
            s+='0';
        }
        cout<<s<<endl;
    }
    else if(zero>0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<-1<<"\n";
    }
    return 0;
}