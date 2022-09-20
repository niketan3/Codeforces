#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}
ll *prime(ll n)
{
    ll *array=new ll[n/2];
    array={0};
    int j = 0;
    for (int i = 3; i < n / 2; i++)
    {
        if (isprime(i))
        {
            array[j] = i;
            j++;
        }
    }
    return array;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        ll n;
        cin >> n;
        ll *ptr = prime(n);
        while (*ptr != 0)
        {
            if (n % (*ptr) == 0)
            {
                flag = 1;
            }
            ptr++;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}