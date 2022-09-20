#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string s;
    cin >> s;

    int arr[s.length()] = {0};
    for (int i = s.length() - 2; i >= 0; i--)
    {
        if (s[i] == s[i + 1])
        {
            arr[i] = arr[i + 1] + 1;
        }
        else
        {
            arr[i]=arr[i+1];
        }
    }

    // for(auto x:arr)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<arr[x-1]-arr[y-1]<<endl;
    }
    return 0;
}