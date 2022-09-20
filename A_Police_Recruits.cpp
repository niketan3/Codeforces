#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int sum=0;
    int ans=0;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==-1 and sum==0)
        {
            ans++;
        }
        else if(x==-1 and sum!=0)
        {
            sum=sum-1;
        }
        else
        {
            sum=sum+x;
        }
    }
    cout<<ans;
    return 0;
}