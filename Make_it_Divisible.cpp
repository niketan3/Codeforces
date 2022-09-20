#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        s = "";
        for (int i = 0; i < n ; i++)
        {
            if (i == n - 1)
            {
                s = s + '3';
            }
            else
            {
                s=s+'9';
            }
        }
        cout << s << endl;
    }
    return 0;
}