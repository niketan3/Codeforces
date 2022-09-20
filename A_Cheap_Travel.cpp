#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    float temp=b/m;
    if(temp>=a)
    {
        cout<<a*n<<endl;
    }
    else
    {
       int money=(n/m)*b;
       if(((n%m)*a) > b)
       {
           money=money+b;
       }
       else
       {
           money=money+(n%m)*a;
       }
       cout<<money<<endl;

    }

    return 0;
}
