#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        if (n == 2)
        {
            cout << 1 << endl;
            continue;
        }
        int max = 0;
        int flag = 0;
        for (int i = 0; i < s.length() ; i++)
        {
            
            if(s[i]=='1' and flag==0)
            {
                count++;
                flag=1;
            }
            if(s[i]=='0')
            {
                flag=0;
            }
        
        }
        if ( s[n - 2] == '0')
        {
            count++;
        }
        
        cout << count << endl;
    }
    return 0;
}