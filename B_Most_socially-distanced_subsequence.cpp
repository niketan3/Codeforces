#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int m=0;
vector<int>re;
void solve(vector<int>i,vector<int >o)
{
    if(i.empty())
    {
       
        if(o.size()==1)
        {
            return;
        }
        int ans=0;
        
        int x=o.size();
        for (int j=0;j<x-1;j++)
        {
            ans=ans+abs(o[j]-o[j+1]);
        }
        if(ans>m)
        {
            m=ans;
            re=o;
        }
        if(ans==m)
        {
            if(re.size()>o.size())
            {
                re=o;
            }
        }       
         return;
    }
    
    int x=i[0];
    i.erase(i.begin());
    solve(i,o);
    o.push_back(x);
    solve(i,o);

}
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for (int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        vector<int>output;
        solve(v,output);
        cout<<re.size()<<endl;
        for (auto x:re)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        m=0;
        re.clear();
    }
    return 0;
}