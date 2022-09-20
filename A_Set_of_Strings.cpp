#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.length() < n)
    {
        cout << "NO" << endl;
        return 0;
    }
    bool hash[26] = {0};
    int count = 0;
    vector<string> v;
    string x = "";
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==s[i+1])
        {
            x=x+s[i];
            continue;
        }
        else
        {
            count++;
        }
        if (hash[s[i] - 97] == 0 )
        {
            count++;
            hash[s[i] - 97] = 1;
            if (count == n)
            {
                string y = s.substr(i);
                v.push_back(y);
                break;
            }
            else
            {
                x = x + s[i];
                v.push_back(x);
                x = "";
            }
        }
        else
        {
            x = x + s[i];
        }
    }
    if (count == n)
    {
        cout << "YES" << endl;
        for (auto x : v)
        {
            cout << x << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}