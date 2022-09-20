#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
       
       
    vector<pair<int ,int >>m;
    for (int i=0;i<t;i++)
    { 
        int x,y;
        cin>>x>>y;
        m.push_back(make_pair(x,y));
    }

    sort(m.begin(),m.end());
    int count=0;
    for (int i=0;i<t;i++)
    {
        if((m[i].second>m[i+1].second ) and( m[i].first <m[i+1].first))
        {
            count++;
        }

    }
    if (count==0)
    {
        cout<<"Poor Alex";
    }
    else
    {
        cout<<"Happy Alex";
    }
    return 0;
}