#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int dp[15][15];
vector<string> v;
void solve(string output, string s, int index)
{
    if (index >= s.size())
    {
        v.push_back(output);
        return;
    }
    if (s[index] == '+' or s[index] == '-')
    {
        solve(output + s[index], s, index + 1);
    }
    else
    {
        solve(output + '+', s, index + 1);
        solve(output + '-', s, index + 1);
    }
}
int main()
{
    memset(dp, -1, sizeof(dp));
    string s;
    cin >> s;
    string y;
    cin >> y;
    int flag = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '-')
        {
            count1--;
        }
        else if (s[i] == '+')
        {
            count1++;
        }
    }
    for (int i = 0; i < y.length(); i++)
    {
        if (y[i] == '?')
        {
            flag = 1;
        }
        if (y[i] == '-')
        {
            count2--;
        }
        else if (y[i] == '+')
        {
            count2++;
        }
    }
    if (!flag)
    {
        if (count1 == count2)
        {
            float x = 1.00f;
            cout << fixed << setprecision(12) << x << endl;
        }
        else
        {
            float x = 0.00f;
            cout << fixed << setprecision(12) << x << endl;
        }
    }
    else
    {
        solve("", y, 0);
        int tap = 0;
        for (auto x : v)
        {
            int co = 0;
            for (int i = 0; i < x.length(); i++)
            {
                if (x[i] == '-')
                {
                    co--;
                }
                else if (x[i] == '+')
                {
                    co++;
                }
            }
            if (co == count1)
            {
                tap++;
            }
        }
        cout << fixed << setprecision(12) << float(tap) / (v.size() * 1.0);
    }
    return 0;
}