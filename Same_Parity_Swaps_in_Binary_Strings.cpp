#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--)
    {
        int size;
        cin>>size;
        string s;
        cin>>s;
        int one=0;
        int zero=0;
        int flag=1;
        for (int i=0;i<s.length()-1;i++)
        {
            if(s[i]!='0' or s[i+1]!='1')
            {
                flag=0;
            }
            i++;
        }
      
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if(s.length()%2==1)
        {
            cout<<min(one,zero)<<endl;
        }
        else if(flag==1 and one==zero)
        {
            cout<<one<<endl;
            
        }
       else if(one ==zero and flag==0)
        {
            cout<<one-1<<endl;
        }
        else
        {
            cout<<min(one,zero)<<endl;
        }
    }
    return 0;
}