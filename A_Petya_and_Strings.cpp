#include<bits/stdc++.h>
using namespace std;
int main (){
    string s1;
    string s2;
    cin>>s1>>s2;
    int x=0;
    int y=0;
    for (int i=0;i<s1.length();i++)
    {
        if(s1[i]<='Z' )
        {
            s1[i]=s1[i]+32;
        }
        if(s2[i]<='Z' )
        {
            s2[i]=s2[i]+32;
            
        }
        x=x+s1[i];
        y=y+s2[i];
        if(x==y)
        {
            continue;
        }
        else
        {
            break;
        }
       
    }
    if(x==y)
    {
        cout<<0<<endl;
    }
    else if(x>y)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
   
    return 0;
}