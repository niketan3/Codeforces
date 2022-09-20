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
        int s1=0;
        int l=0;
        for (int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(s[0]=='L')
            {
                l++;
            }
            else
            {
                s1++;
            }
        }
        cout<<s1<<" "<<l<<endl;
    }
    return 0;
}