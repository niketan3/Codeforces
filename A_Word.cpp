#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    int cap=0;
    int small=0;
    for (int i=0;i<s.length();i++)
    {
        if(s[i]<='Z')
        {
            cap++;
        }
        else
        {
            small++;
        }
    }
   
    if(small>cap)
    {
        for (int i=0;i<s.length();i++)
        {
            if(s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            
        }
    }
  
    else if(cap>small)
    {
        for (int i=0;i<s.length();i++)
        {
            if(s[i]>='a')
            {
                s[i]=s[i]-32;
            }
            
        }
    }
    else
    {
        for (int i=0;i<s.length();i++)
        {
            if(s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            
        }

    }
    cout<<s<<endl;
    return 0;
}