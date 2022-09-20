#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int odd=0;
    int even=0;
    int oindex=0;
    int eindex=0;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x%2==0)
        {
            even++;
            eindex=i;
        }
        else
        {
            odd++;
            oindex=i;
        }
    }
    if(even==1)
    {
        cout<<eindex<<endl;
    }
    else if(odd==1)
    {
        cout<<oindex<<endl;
    }
    return 0;
}