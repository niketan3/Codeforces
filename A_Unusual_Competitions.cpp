#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    ll t;
    cin >> t;
    string s;
    cin >> s;
    ll ans = 0;
    ll oc = 0;
    ll temp = 0;
    int flag = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
        {
            if (ans == 0)
            {
                flag = 1;
                 oc=i;
            }
            ans = ans - 1;
        }
        else
        {
            ans = ans + 1;
            if (ans == 0 and flag == 1)
            {
                temp = temp + i - oc + 1;
                flag = 0;
               
            }
        }
    }
    if (ans == 0)
    {
        cout << temp << endl;
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}