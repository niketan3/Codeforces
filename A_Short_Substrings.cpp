#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    
    for (int i=0;i<t;i++)
    {
        string s;
        cin>>s;
      
        string ans="";
        for (int j=0;j<s.length();j++)
        {
            ans=ans+s[j];
            j++;
        }
        ans=ans+s[s.length()-1];
        cout<<ans<<endl;
    }
    return 0;
}