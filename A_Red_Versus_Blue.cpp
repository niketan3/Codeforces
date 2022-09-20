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
        int r;
        cin>>r;
        int b;
        cin>>b;
        float temp=float(r)/float((b+1));
        int x=ceil(temp);
        string s="";
        for (int i=1;i<=n;i++)
        {
            if(r%b==0)
            {
                int x=r/b;
                if()
            }
            
            else if(i%(x+1)==0 and b>0)
            {
                s=s+'B';
                b--;
            }
            else
            {
                s=s+'R';
                r--;
            }
        }
        cout<<s<<endl;

    }
    return 0;
}