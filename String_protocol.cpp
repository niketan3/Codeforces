#include<bits/stdc++.h>
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
        int opr=0;
        int flag=0;
        for (int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1] and flag==0)
            {
                opr=opr+1;
                i++;
                flag=1;
            }
            else
            {
                opr++;
                flag=0;
            }
        }
        if(s[s.length()-1]!=s[s.length()-2])
        {
            opr++;
        }
        else if(s[s.length()-1]==s[s.length()-2] and flag==1)
        {
            opr++;
        }
        cout<<opr<<endl;
    }
    return 0;
}