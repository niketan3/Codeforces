#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{   if (b == 0) return 1;
ll resp = binaryExp(a, b / 2);
if (b & 1) // b is odd
return a * (resp)*resp;
else
return resp * resp;
}
int main (){
    
int t;
cin>>t;
while(t--)
 {
    int n;
    cin>>n;
    vector<string>v;
    multiset<string>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m.insert(s);
        v.push_back(s);
    }
    string ans="";
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<v[i].length()-1;j++)
        {
            string str1=v[i].substr(0,j+1);
            string str2=v[i].substr(j+1);
           auto it= m.find(str1);
           auto it1= m.find(str2);
           if(it!=m.end() and (it1!=m.end()))
           {
                ans=ans+'1';
                flag=1;
                break;
           }
        }
        if(flag==0)
        {
            ans=ans+'0';
        }
    }
    cout<<ans<<endl;
 }
    return 0;
}