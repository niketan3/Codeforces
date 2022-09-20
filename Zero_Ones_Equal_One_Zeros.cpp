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
        string s="";
        for(int i=0;i<n;i++)
        {
            if(i==0 or i==n-1)
            {
                s=s+'0';
            }
            else
            {
                s=s+'1';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}