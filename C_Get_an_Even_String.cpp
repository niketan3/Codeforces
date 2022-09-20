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
        int ans = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            // cout<<i<<endl;
            if ((i + ans) % 2 == 0)
            {
                if (s[i] != s[i + 1])
                {
                    int index1 = -1;
                    for (int j = i + 1; j < s.length(); j++)
                    {
                        if (s[i] == s[j])
                        {
                            index1 = j;
                            break;
                        }
                    }
                    int index2 = -1;
                    for (int j = i + 2; j < s.length(); j++)
                    {
                        if (s[j] == s[i + 1])
                        {
                            index2 = j;
                            break;
                        }
                    }
                    // cout << index1 << " " << index2 << endl;
                    // cout<<ans<<endl;

                    if (index1 == -1 and index2 == -1)
                    {
                        i = i + 1;
                        ans = ans + 2;
                       
                    }
                   else  if (index1 == -1 and index2 != -1)
                    {
                        ans += index2 - i - 1;
                        i = index2;
                    }
                    else if (index2 == -1 and index1 != -1)
                    {
                        ans += index1 - i - 1;
                        i = index1;
                    }
                    else
                    {
                        int ans1 = index1 - i - 1;
                        int ans2 = index2 - i - 1;
                        // cout<<ans1<<" "<<ans2<<endl;
                        // cout<<index1<<" "<<index2<<endl;
                        if (ans1 < ans2)
                        {
                            ans += ans1;
                            i = index1;
                        }
                        else
                        {
                            ans += ans2;
                            i = index2;
                        }
                    }
                }
            }
        }
        if ((s.length() - ans) % 2 == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans + 1 << endl;
        }
    }
    return 0;
}