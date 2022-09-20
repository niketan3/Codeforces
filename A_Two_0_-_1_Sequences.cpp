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
        ll n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        // if (n<m)
        // {
        //     // cout << n << " " << m << endl;
        //     cout << "NO\n";
        // }
        // else
        {
            cout << "HI\n";
            int i = a.length() - 1;
            int j = b.length() - 1;
            int flag = 1;
            while (j > 0)
            {
                
                if (a[i] != b[j])
                {
                    flag = 0;
                }
                i--;
                j--;
            }
            char x = b[0];
            int flag1 = 0;
            for (int i = 0; i <= i; i++)
            {
                if (a[i] == x)
                {
                    flag1 = 1;
                }
            }
            if (flag and flag1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        //  cout<<s1<<endl;
    }
    return 0;
}