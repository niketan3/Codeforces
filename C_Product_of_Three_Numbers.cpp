#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll m=n;
        int count=0;
        int first=0;
        int second =0;
        int third=0;
        int x=1;
        
            for(int i=x+1; x<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    if(first==0)
                    {
                        first=i;
                        n=n/i;
                        x=first;
                    }
                    else if(second==0)
                    {
                        second=i;
                        if(i!=n/i)
                        {
                            third=n/i;
                        }

                        break;

                    }
                }
            }
            if(first*second*third==m)
            {
                cout<<"YES"<<endl;
                cout<<first<<" "<<second<<" "<<third<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
    return 0;
}