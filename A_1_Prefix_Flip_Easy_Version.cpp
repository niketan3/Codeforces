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
        string s1;
        cin >> s1;
        vector<int> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == s1[i])
            {
                continue;
            }
            else
            {
                if (s[i] == s[0])
                {
                    ans.push_back(i + 1);
                    int j = 0;
                    int k = i;
                    while (j <= k)
                    {
                        char temp = s[k];
                        if (s[j] == '1')
                        {
                            s[k] = '0';
                        }
                        else
                        {
                            s[k] = '1';
                        }
                        if (temp == '0')
                        {
                            s[j] = '1';
                        }
                        else
                        {
                            s[j] = '0';
                        }
                        j++;
                        k--;
                    }
                }
                else
                {
                    
                }
            }
        }
    }
    return 0;
}