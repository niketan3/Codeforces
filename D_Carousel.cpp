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
int par[2005];
int rank1[2005];
int findpar(int x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = findpar(par[x]);
}
void Union(int a, int b)
{
    a = findpar(a);
    b = findpar(b);
    if (a != b)
    {
        if (rank1[a] < rank1[b])
            swap(a, b);
        par[b] = a;
        if (rank1[a] == rank1[b])
            rank1[a]++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        if (s.size() == 1)
        {
            cout << 1 << '\n';
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << '\n';
            continue;
        }

        if (n % 2 == 0)
        {
            cout << 2 << '\n';
            for (int i = 0; i < n; i++)
            {
                if (i % 2)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 2 << " ";
                }
            }
            cout << endl;
        }
        else
        {

            int ans=0;
            int visited[n]={0};
            visited[0]=1;
            int mainflag=0;
            for(int i=1;i<n;i++)
            {
                if(mainflag==1)
                {
                    if(visited[i-1]==1)
                    {
                        visited[i]=2;
                    }
                    else
                    {
                        visited[i]=1;
                    }
                }
                else if(i==n-1)
                {
                    if(arr[i-1]==arr[i])
                    {
                        visited[i]=visited[i-1];
                    }
                    else if(arr[i]==arr[0])
                    {
                        visited[i]=visited[0];
                    }
                    else if(visited[i-1]==visited[0])
                    {
                        if(visited[i-1]==1)
                        {
                            visited[i]=2;
                        }
                        else
                        {
                            visited[i]=1;
                        }
                    }
                    else
                    {
                        visited[i]=3;
                    }
                }
               else if(arr[i]==arr[i-1] and mainflag==0)
                {
                    mainflag=1;
                    visited[i]=visited[i-1];
                }
                else
                {
                    if(visited[i-1]==1)
                    {
                        visited[i]=2;
                    }
                    else
                    {
                        visited[i]=1;
                    }
                }
            }
           int flag=0;
            for(auto x:visited)
            {
                // cout<<x<<" ";
                if(x==3)
                {
                    flag=1;
                }
            }
            if(flag)
            {
                cout<<3<<'\n';
                for(auto x:visited)
                {
                    cout<<x<<" ";
                }
                cout<<'\n';
            }
            else
            {
                cout<<2<<'\n';
                for(auto x:visited)
                {
                    cout<<x<<" ";
                }
                cout<<'\n';
            }
        }
    }
    return 0;
}