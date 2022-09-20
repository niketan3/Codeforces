#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if((s == "YES")  or (s == "yes") or (s == "Yes") or (s == "YEs") or (s == "YeS") or (s == "yEs") or (s == "yES") or (s == "yeS"))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}