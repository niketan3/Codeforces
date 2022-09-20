#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int count=0;
    for (int i=1;i<=n;i++)
    {
        if(m%i==0)
        {
            if((m/i) <=n)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}   