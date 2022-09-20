#include<bits/stdc++.h>
using namespace std;
string Lower(string s)
{
 
    for (int i=0;i<s.length();i++)
    {
        s[i]=s[i]+32;
    }
    return s;
}
string case2(string s)
{
    s[0]=s[0]-32;
     for (int i=1;i<s.length();i++)
    {
        s[i]=s[i]+32;
    }
    return s;

}
int main (){
    string s;
    cin>>s;
    
    if(s.length()==1)
    {
        if(s[0]>='a' and s[0]<='z')
        {
           s[0]=s[0]-32;
           cout<<s[0]<<endl;
        }
        else
        {
           s[0]=s[0]+32;
           cout<<s[0]<<endl;
        }
    }
    else
    {
         int small=0;
            int big=0;
        for (int i=0;i<s.length();i++)
        {
           
            if(s[i]>='a' and s[i]<='z')
            {
                small++;
            }
            else if(s[i]>='A' and s[i]<='Z')
            {
                big++;
            }
            
        }
      
        if(small==0)
        {
            string t=Lower(s);
            cout<<t<<endl;  
        }
        else if(small==1 and s[0]>='a' and s[0]<='z')
        {
            string x=case2(s);
            cout<<x<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}