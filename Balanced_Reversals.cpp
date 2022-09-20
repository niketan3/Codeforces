#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cin>>len;
        string s;
        cin>>s;
        string ans="";
        int a=0;
        int b=0;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                a++;
            }
            else{
                b++;
            }
        }
     
        for (int i=0;i<b;i++)
        {
            ans=ans+'0';
        }
        for (int i=0;i<a;i++)
        {
            ans=ans+'1';
        }
        cout<<ans<<endl;
    }
    return 0;
}