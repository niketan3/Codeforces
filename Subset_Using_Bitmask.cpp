#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<vector<int>> Subset(vector<int> v)
{
    vector<vector<int>> ans;
    int sub=1<<v.size();
    for (int i = 0; i < sub; i++)
    {
        vector<int> temp;
        for (int j = 0; j <v.size(); j++)
        {
            int t=1<<j;
        //    cout<<t<<" ";
            if ((i & (t)) != 0)
            {
                // cout<<i<<" "<<t<<endl;
                temp.push_back(v[j]);
            }
        }
        // cout<<endl;
        for(auto x:temp)
        {
            // cout<<x<<" ";
        }
        // cout<<endl;
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<vector<int>> ans = Subset(v);
    for(auto x:ans)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}