#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        string b;
        cin>>s>>b;
        string ans="";
        for (int i=0;i<s.length();i++)
        {
            if(s[i]==b[i])
        {
            ans=ans+'G';
        }
        else
        {
            ans=ans+'B';
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}