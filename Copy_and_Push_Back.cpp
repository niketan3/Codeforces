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
bool solve(string str)
{
    int n=str.size();
    if(n==0 or n==1)
    {
        return true;
    }
    if(n%2!=0)
    {
        return solve(str.substr(0,n-1));
    }
    string s1=str.substr(0,n/2);
    string s2=str.substr(n/2,n);
    if(s1==s2)
    { 
        return solve(str.substr(0,(n/2)));
    }
    return false;
}
int main (){
int t;
cin>>t;
while(t--)
 {
    int n;
    cin>>n;
    string temp;
    cin>>temp;
    if(solve(temp))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
 }
    return 0;
}