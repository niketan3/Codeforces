#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main (){
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if(s[i]>=5)
        {
            s[i]='9'-s[i]+'0';
        }
    }
    cout<<s;
    return 0;
}