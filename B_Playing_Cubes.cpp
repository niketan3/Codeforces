#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll b, r;
    cin >> r >> b;
    int count=0;
    ll b1,r1;
    b1=b;
    r1=r;
  
   {
        cout<<max(r,b)-1<<" ";
        cout<<min(r,b)<<endl;
   }
  
    return 0;
}