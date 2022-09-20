#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char ,int>m;

    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    int flag=0;
    for(auto x:m)
    {
        if((x.second%n)!=0)
        {
            cout<<-1<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        string s="";
        
        for(auto x:m)
        {
            int y=x.second/n;
            for(int i=0;i<y;i++)
            {
                s=s+x.first;
            }
        }
       
        string ans="";
        for(int i=0;i<n;i++)
        {
            ans=ans+s;
        }
        cout<<ans<<endl;
    }
    return 0;
}