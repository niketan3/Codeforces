#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;
        int one=0;
        int zero=0;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if(one==zero)
        {
            cout<<one*2<<endl;
        }
        else
        {
            int m=min(one,zero);
            cout<<(m*2)+1<<endl;
        }
    }
    return 0;
}