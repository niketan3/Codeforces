#include<bits/stdc++.h>
using namespace std;
int main (){
    string n1,n2;
    cin>>n1>>n2;
    string ans=n1;
    for (int i=0;i<n1.length();i++)
    {
        if(n1[i]==n2[i])
        {
            ans[i]='0';
        }
        else
        {
            ans[i]='1';
            
        }
    }
    cout<<ans<<endl;
    return 0;
}