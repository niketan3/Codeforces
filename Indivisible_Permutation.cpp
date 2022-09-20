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
        if (n % 2 == 1)
        {
            cout<<1<<" ";
            for (int i = 2; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << i + 1 << " ";
                }
                else
                {
                    cout << i - 1 << " ";
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<n<<" ";
            for (int i=2;i<=n-1;i++)
            {
                if(i%2==0)
                {
                    cout<<i+1<<" ";
                }
                else
                {
                    cout<<i-1<<" ";
                }
            }
            cout<<1<<endl;
            // cout<<endl;
        }
    }
    return 0;
}