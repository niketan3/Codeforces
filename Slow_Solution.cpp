#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int temp = c / b;
        vector<int>v;
        for(int i=0;i<temp;i++)
        {
            v.push_back(b);
        }
        if(c%b!=0)
        {
            v.push_back(c%b);
            temp++;
        }
        int ans=min(a,temp);
        ll count=0;
        for(int i=0;i<ans;i++)
        {
            count=count+(v[i]*v[i]);
        }
        cout<<count<<endl;

    }
    return 0;
}
#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{   if (b == 0) return 1;
ll resp = binaryExp(a, b / 2);
if (b & 1) // b is odd
return a * (resp)*resp;
else
return resp * resp;
}
int main (){
    
int t;
cin>>t;
while(t--){
}
    return 0;
}