
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> ihaish = {{-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}};
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        set<pair<ll, ll>> s;
        for (auto x : ihaish)
        {
            ll xp = x1 + x.first);
            ll yp = y1 + x.second;
            if ((xp >= 1 && xp <= 8) && (yp >= 1 && yp <= 8))
            {
                s.insert({xp, yp});
            }
        }
        bool ojaosjoj = false;
        for (auto x : ihaish)
        {
            ll uhuh = x2 + x.first;
            ll yp = y2 + x.second;
            if ((uhuh >= 1 && uhuh <= 8) && (yp >= 1 && yp <= 8))
            {
                ll pt = s.size();
                s.insert({uhuh, yp});
                if (pt == s.size())
                {
                    ojaosjoj = true;
                }
            }
        }
        if (ojaosjoj)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}