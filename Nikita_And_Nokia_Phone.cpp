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
    map<char, pair<int, int>> m;
    m['a'] = make_pair(1, 2);
    m['b'] = make_pair(1, 2);
    m['c'] = make_pair(1, 2);
    m['d'] = make_pair(1, 3);
    m['e'] = make_pair(1, 3);
    m['f'] = make_pair(1, 3);
    m['g'] = make_pair(2, 1);
    m['h'] = make_pair(2, 1);
    m['i'] = make_pair(2, 1);
    m['j'] = make_pair(2, 2);
    m['k'] = make_pair(2, 2);
    m['l'] = make_pair(2, 2);
    m['m'] = make_pair(2, 3);
    m['n'] = make_pair(2, 3);
    m['o'] = make_pair(2, 3);
    m['p'] = make_pair(3, 1);
    m['q'] = make_pair(3, 1);
    m['r'] = make_pair(3, 1);
    m['s'] = make_pair(3, 1);
    m['t'] = make_pair(3, 2);
    m['u'] = make_pair(3, 2);
    m['v'] = make_pair(3, 2);
    m['w'] = make_pair(3, 3);
    m['x'] = make_pair(3, 3);
    m['y'] = make_pair(3, 3);
    m['z'] = make_pair(3, 3);
    int t;
    cin >> t;
    while (t--)
    {
        ll s,x,y;
        cin>>s>>x>>y;
        string str;
        cin>>str;
        ll count=x;
        for(int i=1;i<str.length();i++)
        {
            int a,b,c,d;
            a=m[str[i]].first;
            b=m[str[i]].second;
            c=m[str[i-1]].first;
            d=m[str[i-1]].second;
            int dist=abs(a-c)+abs(b-d);
            if(dist==0)
            {
                count=count+x+y;
            }
            else
            {
                count=count+x+dist;
            }

        }
        cout<<count<<endl;
    }
    return 0;
}