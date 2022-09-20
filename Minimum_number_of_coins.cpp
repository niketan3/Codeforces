#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int coins=0;
        if (n % 10 != 0 and n % 5 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if(n%10==0)
            {
                cout<<n/10<<endl;
            }
            else
            {
                cout<<n/10+1<<endl;
            }
        }
    }
    return 0;
}