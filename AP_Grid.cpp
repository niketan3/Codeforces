#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>m>>n;
        if(m>n)
        {
            int d=n+1;
            int rada=1;
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<rada+(d*j)<<" ";
                }
                rada++;
                d++;
                cout<<endl;
            }
           
        }
        else
        {
            int rada=1;
            int d=1;
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<rada+(d*j)<<" ";
                }
                cout<<endl;
                 d++;
            rada+=(m+1);
            }
           
            
        }
    }
    return 0;
}