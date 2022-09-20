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
        float k;
        cin>>n>>k;
        vector<float>v;
        for(int i=0;i<n;i++)
        {
            float x;
            cin>>x;
            v.push_back(x);
        }
        float ma=0;
        float temp=0;
        for(auto x:v)
        {
            if(float(abs(x-temp))>ma)
            {
                ma=float(abs(x-temp));
            }
            temp=temp+k;
        }
        cout<<ma<<endl;
    }
    return 0;
}