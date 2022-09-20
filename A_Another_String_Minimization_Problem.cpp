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
    int n,m;
    cin>>n>>m;
    string s="";
    for(int i=0;i<m;i++)
    {
        s=s+'B';
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int temp=m+1-x;
        // cout<<x<<" "<<temp<<endl;
        if(temp<0)
        {
            s[x]='A';
        }
        else
        {
            int index=min(temp,x);
            // cout<<index<<endl;
            // cout<<s<<endl;
            if(s[index-1]=='B')
            {
                s[index-1]='A';
            }
            else
            {
                s[max(temp,x)-1]='A';
            }
        }
    }
    cout<<s<<endl;
 }
    return 0;
}