#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isperfect(ll x)
{
    long long y = sqrt(x);
    return (y * y == x);
}
bool isprime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        if (x > 2)
        {
            if (isperfect(x))
            {
                if (isprime (int(sqrt(x))))
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}