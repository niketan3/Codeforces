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
        int cp = n;
        vector<int> v;
        int flag = 0;
        int temp = 1;
        for (int i = 0; i < n; i++)
        {
            if (flag)
            {
                v.push_back(cp);
                cp--;
                flag = 0;
            }
            else
            {
                v.push_back(temp);
                temp++;
                flag = 1;
            }
        }
        int flag1 = 1;
        for (int i = 0; i < n - 2; i++)
        {
            if ((v[i] ^ v[i + 1]) == v[i + 2])
            {
                flag1 = 0;
            }
        }
        if (flag1)
        {
            for (auto x : v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}