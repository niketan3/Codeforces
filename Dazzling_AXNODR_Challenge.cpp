#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int b=1;
    for (int i=2;i<200;i++)
    {
        if(i%2==0)
        {
            b=b^i;
        }
        else
        {
            b=b&i;
        }
        cout<<i<<": ";
        cout<<b<<endl;
    }
    return 0;
}