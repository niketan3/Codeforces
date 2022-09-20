#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    for (int i=1;i<=20;i++)
    {
        int x=0;
        for (int j=1;j<=i;j++)
        {
            x=x^j;
        }
        cout<<i<<" "<<x<<endl;
    }
    return 0;
}