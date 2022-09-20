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
    int ma = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        ma = max(ma, y);
        v.push_back({x, y});
    }
    int count=0;
    for (int i = 0; i < t; i++)
    {
        if(v[i].second!=ma)
        {
            count++;
        }
    }
    cout<<ma<<endl;
    cout<<count<<'\n';
    return 0;
}