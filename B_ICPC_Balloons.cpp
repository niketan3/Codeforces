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
while(t--)
 {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool arr[26]={0};
    int count=0;
    for(int i=0;i<n;i++)
    {
        if((arr[s[i]-'A'])==0)
        {
            arr[s[i]-'A']=1;
            count=count+2;
        }
        else
        {
            count+=1;
        }
    }
    cout<<count<<endl;

 }
    return 0;
}