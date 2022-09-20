#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        if(y==0)
        {
            cout<<0<<" ";
            continue;
        }
        // cout<<x<<endl;
        int ans=INT16_MAX;
        // cout<<ans;
        for (int i=0;i<16;i++)
        {
            int x=y;
            int count=0;
            x=y+i;
            // cout<<x<<endl;
            while(1)
            {
                if(x%2==0)
                {
                    x=x/2;
                    count++;
                }
                else
                {
                    break;
                }
            }
            count=15-count;
            count=count+i;
            ans=min(ans,count);
        }
        cout<<ans<<" ";
    }
    return 0;
}