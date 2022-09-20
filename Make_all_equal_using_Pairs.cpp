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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int ma=0;
        int val=0;
        for(auto x:m)
        {
            if(x.second>ma)
            {
                ma=x.second;
            }
        }
        cout<<n-ma<<endl;
    }
    return 0;
}