#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        for (int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            m[k]++;
        }
        int count=0;
        for (auto it=m.begin();it!=m.end();it++)
        {
            if((*it).second%2==1)
            {
                count++;
            }
        }
        if((n+count)%4==0)
        {
            cout<<count<<endl;
        }
        else
        {
            // cout<<"HI";
            int re=(n+count)%4;
            cout<<count+(4-re)<<endl;
        }
    }
    return 0;
}