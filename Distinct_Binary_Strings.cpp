#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;
        int count=1;
        int prev=s[0];
        for (int i=1;i<s.length();i++)
        {
            if(s[i]!=prev)
            {
                prev=s[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}