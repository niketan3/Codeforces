#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        int count=0;
        int first=1;
        for (int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(first)
                {
                    count=1;
                    first=0;
                }
                
                if(s[i+1]=='1' and flag==0)
                {
                    count++;
                    flag=1;
                }
                else
                {
                    flag=0;
                }
            }
        }
        if(count>=2)
        {
            cout<<2<<endl;
        }
        else if(count==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}