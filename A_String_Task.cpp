#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    string ans="";
    int j=1;
    int i=0;
    while(i!=s.length())
    {
       
        
           if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='Y' or s[i]=='y' )
            {
                i++;
                
            }
            else if(s[i]>='A' and s[i]<='Z')
            {
                s[i]=s[i]+32;
                ans=ans+'.'+s[i];
                i++;
                j++;
            }
            else
            {
                ans=ans+'.'+s[i];
                i++;
                j++;
            }
        
    }
    cout<<ans;
    return 0;
}