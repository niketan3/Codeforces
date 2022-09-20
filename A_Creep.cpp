#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int m=min(a,b);
        string s="";
        int flag=1;
       
        for(int i=0;i<2*m;i++)
        {
            
            if(flag==1)
            {
                s=s+'1';
                flag=0;
            }
            else
            {
                s=s+'0';
                flag=1;
            }
        }
        
        int flag1=0;
        if(m==a)
        {
            flag1=1;
        }
        else
        {
            flag1=0;
        }
        for(int i=2*m;i<a+b;i++)
        {
            if(flag1)
            {
                s=s+'1';
            }
            else
            {
                s=s+'0';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}   