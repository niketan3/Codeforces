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
        string s;
        cin >> s;
        ll p;
        cin >> p;
        vector<pair<int, char>> v;
        ll sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum += s[i] - 'a' + 1;
            v.push_back({s[i] - 'a' + 1, s[i]});
        }
        sort(v.begin(), v.end());
        int index = s.length()-1;
        int arr[26] = {0};
        while (sum > p)
        {
            sum = sum - v[index].first;
            arr[v[index].second - 'a']++;
            index--;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (arr[s[i] - 'a'] == 0)
            {
                cout << s[i];
            }
            else
            {
                arr[s[i] - 'a']--;
            }
        }
        cout << endl;
    }
    return 0;
}