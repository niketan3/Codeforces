#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, w;
        cin >> n >> w;
        vector<pair<ll, ll>> v;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(make_pair(x, i));
        }
        sort(v.begin(), v.end());
        vector<ll>ans;
        int sum=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i].first<=w)
            {
                if((sum+v[i].first)<=w)
                {
                    sum=sum+v[i].first;
                    ans.push_back(v[i].second);
                }
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0)
        {
            cout<<-1<<endl;
        
        }
        else if(sum>=ceil(w/2))
        {
           
            cout<<ans.size()<<endl;
            for(auto x:ans)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}