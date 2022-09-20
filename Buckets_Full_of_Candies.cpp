#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    while(t--)
    {
        ll friends;
        cin>>friends;
        ll can;
        cin>>can;
        ll bucket;
        cin>>bucket;
        int temp=(friends+bucket-1);
        ll re=can%(temp);
        if (re==0)
        {
            cout<<0<<endl;
        }
        else if(re<bucket)
        {
            cout<<re<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}