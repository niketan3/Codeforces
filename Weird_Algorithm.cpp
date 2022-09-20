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
int n;
    cin >> n;
    vector<int> ans;
    ans.push_back(n);
    while (n!=1)
    {

        if (n % 2 == 0)
        {
            n = n / 2;
           ans.push_back(n);
        }
       else 
        { 
            n = 1 + n * 3;
            ans.push_back(n);
        }
    }
    for(auto x: ans)
     cout<<x<<" ";
 }

