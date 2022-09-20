#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{   if (b == 0) return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;  
}
string solve(string s)
{
    string ans = "";
    int hash[10] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < hash[i]; j++)
        {
            ans = ans + to_string(i);
        }
    }
    return ans;
}
int main()
{
    // string s;
    // cin >> s;
    // string ans = solve(s);
    // cout << ans << endl;
    ll x = binaryExp(2, 6);
    cout << x << endl;
    return 0;
}