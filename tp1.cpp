#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    string s;
    cin>>s;
    if(s[0]>='5' and s[0]!='9')
    {
        s[0]='9'-s[0]+'0';
    }

    for (int i=1;i<s.length();i++)
    {
        if(s[i]>='5')
        {
            s[i]='9'-s[i]+'0';
        }
    }
    cout<<s;
    return 0;
}