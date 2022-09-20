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
        int n, h, m;
        cin >> n >> h >> m;
        int ans1 = INT_MAX;
        int ans2 = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x < h)
            {
                int rada = (24 * 60) - (h * 60) - m;
                // cout << rada << endl;
                ans1 = min(ans1, rada + (60 * x) + y);
            }
            else
            {
                if (x != h)
                {
                    int rada = (x * 60) + y - ((60 * h) + m);
                    ans1 = min(ans1, rada);
                }
                if (x == h)
                {
                    if (m <= y)
                    {
                        int rada = (x * 60) + y - ((60 * h) + m);
                       
                        ans1 = min(ans1, rada);
                    }
                    else
                    {
                        int rada = (24 * 60) - (h * 60) - m;
                        ans1 = min(ans1, rada + (60 * x) + y);
                    }
                }
            }
        }

        cout << ans1 / 60 << " " << (ans1 % 60) << endl;
    }
    return 0;
}