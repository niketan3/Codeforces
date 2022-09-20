#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll y, k, n;
    cin >> y >> k >> n;

    if (y >= n)
    {
        cout << -1 << endl;
    }
    else
    {
        ll temp = y / k;
        temp++;
        int flag=0;
        for (int i = 0; i < (n) / k; i++)
        {
            if ((temp * k)<=n)
                {
                    flag=1;
                    cout << (temp * k) - y << " ";
                }

            temp++;
        }
        if(!flag)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}