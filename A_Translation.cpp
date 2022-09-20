#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    int a=1;
    int i=0;
    int j=s.length()-1;
    while(i!=(s.length()))
    {
        if(s[i]!=s1[j])
        {
            a=0;
            break;
        }
        
        i++;
        j--;
    }
    if(a==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}