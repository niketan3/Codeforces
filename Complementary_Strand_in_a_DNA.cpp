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
        string s;
        cin>>s;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                ans=ans+'T';
            }
            if(s[i]=='T')
            {
                ans=ans+'A';
            }
            if(s[i]=='G')
            {
                ans=ans+'C';
            }
            if(s[i]=='C')
            {
                ans=ans+'G';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}