#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool flag[10000005] = {false};
int main()
{
    vector<ll> v;
    for (ll i = 2; i < 5000000; i++)
    {
        if (!flag[i])
        {
            v.push_back(i);
            for (ll j = 2 * i; j < 5000000; j += i)
            {
                flag[j] = true;
            }
        }
    }
    int n;
    cin>>n;
    int i=1;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}