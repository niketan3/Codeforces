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
        int girls;
        cin>>girls;
        bool arr[girls+1]={0};
        int thatgirl=0;
        for(int i=1;i<=girls;i++)
        {
            int n;
            cin>>n;
            int girldone=0;
            while(n--)
            {
                int k;
                cin>>k;
                if(girldone)
                {
                    continue;
                }
                else if(arr[k])
                {
                    continue;
                }
                else
                {
                    girldone=1;
                    arr[k]=1;
                }
            }
            if(girldone==0)
            {
                thatgirl=i;
            }
        }
        if(thatgirl==0)
        {
            cout<<"OPTIMAL\n";
        }
        else
        {
            cout<<"IMPROVE\n";
            cout<<thatgirl<<" ";
            for(int i=1;i<=girls;i++)
            {
                if(arr[i]==0)
                {
                    cout<<i<<" ";
                    break;
                }
                
            }
            cout<<"\n";
        }
    }
    return 0;
}