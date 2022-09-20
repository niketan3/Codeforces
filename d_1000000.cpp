#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    ll t;
    cin>>t;
    int index=1;
    while(t--)
    {
        cout<<"Case #"<<index <<": ";
        index++;
        ll n;
        cin>>n;
        ll array[n];
        for (int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        sort(array,array+n);
        int count=0;
        for (int i=0;i<n;i++)
        {
            if(array[i]>count)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}