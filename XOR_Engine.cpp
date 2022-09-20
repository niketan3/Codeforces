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
        int n;
        cin >> n;
        vector<int> v;
        int q;
        cin >> q;
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if(x%2)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        // cout << v.size();
        // for(int i=0;i<n;i++)
        // {
        //     cout<<(v[i]^3)<<" ";
        // }
        while(q--)
        {
            int x;
            cin>>x;
            if(x%2)
            {
                cout<<odd<<" "<<even<<endl;
            }
            else
            {
                cout<<even<<" "<<odd<<endl;
            }
        }
    }
    return 0;
}