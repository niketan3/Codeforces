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
        int ans1=(500)-(a*2)+1000-((a+b)*4);
        int ans2=1000-(b*4)+500-((a+b)*2);
        cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}