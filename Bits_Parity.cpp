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
        ll n;
        cin>>n;
        vector<ll>arr;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            arr.push_back(x);
        }
        ll q;
        cin>>q;
        
        while(q--)
        {
          
            ll index,val;
            cin>>index>>val;
            ll temp=arr[index];
            arr[index]=val;
            vector<ll>rada;
            for(int i=0;i<n;i++)
            {
                 rada.push_back(arr[i]);
            }
            while(rada.size()!=1)
            {
                
                int nusta=(rada.size()/2)-1;
                vector<ll>varsha;
                for(int i=0;i<=nusta;i++)
                {
                    int j=2*i;
                    if((rada[j]%2)==0 and (rada[j+1]%2)==0)
                    {
                        varsha.push_back(rada[j]&rada[j+1]);
                    }
                    else if(((rada[j]%2)==1 ) and ((rada[j+1]%2)==1))
                    {
                         varsha.push_back(rada[j]&rada[j+1]);
                    }
                    else
                    {
                         varsha.push_back(rada[j]|rada[j+1]);
                    }

                }
                for(auto x:varsha)
                {
                    cout<<x<<" ";
                }
                cout<<endl;
                rada.clear();
                for(int i=0;i<varsha.size();i++)
                {
                    rada.push_back(varsha[i]);
                   
                }
                varsha.clear();
            }
            cout<<rada[0]<<endl;
            arr[index]=temp;
        }
    }
    return 0;
}