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
int par[2005];
int rank1[2005];
int findpar(int x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = findpar(par[x]);
}
void Union(int a, int b)
{
    a = findpar(a);
    b = findpar(b);
    if (a != b)
    {
        if (rank1[a] < rank1[b])
            swap(a, b);
        par[b] = a;
        if (rank1[a] == rank1[b])
            rank1[a]++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<string, char> m;
        m["1"] = 'a';
        m["2"] = 'b';
        m["3"] = 'c';
        m["4"] = 'd';
        m["5"] = 'e';
        m["6"] = 'f';
        m["7"] = 'g';
        m["8"] = 'h';
        m["9"] = 'i';
        m["10"] = 'j';
        m["11"] = 'k';
        m["12"] = 'l';
        m["13"] = 'm';
        m["14"] = 'n';
        m["15"] = 'o';
        m["16"] = 'p';
        m["17"] = 'q';
        m["18"] = 'r';
        m["19"] = 's';
        m["20"] = 't';
        m["21"] = 'u';
        m["22"] = 'v';
        m["23"] = 'w';
        m["24"] = 'x';
        m["25"] = 'y';
        m["26"] = 'z';
        vector<char> v;
        string x = "";
        reverse(s.begin(), s.end());
        for (int i = 0; i < n; i++)
        {
            x += s[i];
            if (x == "0")
            {
                x = "";
                x += s[i + 2];
                x += s[i + 1];
                //    cout<<x<<endl;
                v.push_back(m[x]);
                i += 2;
                x = "";
            }
            else
            {
                // cout<<x<<endl;
                v.push_back(m[x]);
                //    i++;
                x = "";
            }
            x = "";
        }
        reverse(v.begin(), v.end());
        for (auto x : v)
        {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}