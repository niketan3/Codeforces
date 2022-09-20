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
        set<int >s;
        for (int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        int temp=s.size();
        if((n-temp)%2==0)
        {
            cout<<temp<<endl;
        }
        else
        {
            cout<<temp-1<<endl;
        }
    }
    return 0;
}