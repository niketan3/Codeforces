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
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b<c)
        {
            cout<<"Impossible\n";
        }
        else if(a+c<b)
        {
            cout<<"Impossible\n";
        }
        else if(b+c<a)
        {
            cout<<"Impossible\n";
        }
        else
        {
            
        }
    }
    return 0;
}