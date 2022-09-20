#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        vector<pair<int, int>> temp;
        v.push_back({0, 0});
        temp.push_back({0, 0});
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v.push_back({x, i});
            temp.push_back({x, i});
        }
        vector<int> v1;
        v1.push_back(0);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        vector<pair<int, int>> ans;
        for (int i = 1; i <= n; i++)
        {
            int mi = INT_MAX;
            int mindex = i;
            for (int j = i + 1; j <= n; j++)
            {
                if (v[j].first < mi)
                {
                    mi = v[j].first;
                    mindex = j;
                }
            }

            if (mindex != i and mi<=v[i].first)
            {
                ans.push_back({mindex, i});
                v[mindex].first = v[i].first;
                v[i].first = mi;
            }
        }
        for (auto x : ans)
        {
            int x1 = x.first;
            int x2 = x.second;
            swap(v1[x1], v1[x2]);
        }
        int flag = 1;
        for (int i = 1; i <= n; i++)
        {
            if (v1[i] < v1[i - 1])
            {
                flag = 0;
            }
        }
        // for (auto x : v1)
        // {
        //     cout << x << " ";
        // }
        if (flag)
        {
            cout << ans.size() << endl;
            for (auto x : ans)
            {
                cout << x.first << " " << x.second << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}