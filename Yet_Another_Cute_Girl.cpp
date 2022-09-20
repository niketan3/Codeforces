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
int temp;
void setstring(string s)
{
    temp=s.length()-1;
}
int solve(string s,int i=0,int j=temp)
{

}
int main (){
int t;
cin>>t;
while(t--)
 {
    string temp="temp1";
    cout<<temp.substr(3,temp.length()-3)<<endl;
 }
    return 0;
}