#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class tree
{
public:
    int left;
    int right = 0;
    int mid;
    tree()
    {
        left = 0;
        right = 0;
         mid=0;
    }
};
 void solve(int par[], int i, int n, string s,tree * arr)
{
    if (i > n)
    {
        return;
    }
    if (i <= n)
    {
        solve(par, i + 1, n, s,arr);
    }
   
    if(s[i-1]=='W')
    {
        arr[par[i]].left+=arr[i].left+1;  //w
        arr[par[i]].right+=arr[i].right;  //b
        
    }
    else
    {
        arr[par[i]].left+=arr[i].left;  //w
        arr[par[i]].right+=arr[i].right+1;  //b
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
        int par[n+1];
        tree arr[n+1];
        for (int i = 2; i <= n; i++)
        {
            cin >> par[i];
        }
        string s;
        cin >> s;
        solve(par, 2, n, s,arr);
        int cnt=0;
        for (int i=1;i<=n;i++)
        {
           
            if(s[i-1]=='W')
            {
                arr[i].left++;
            }
            else
            {
                arr[i].right++;
            }
            if(arr[i].left==arr[i].right)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}