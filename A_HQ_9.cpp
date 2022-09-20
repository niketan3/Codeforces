#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    int a=0;
    for (int i=0;i<s.length();i++)
    {
        if(s[i]=='H' or s[i]=='Q'  or s[i]=='9')
        {
            a=1;
            break;
        }
    }
    if(a==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}