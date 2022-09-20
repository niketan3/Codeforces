#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;
}
int par[2005];
int rank1[2005];
int findpar(int x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = findpar(par[x]);
}
void Union(int a, int b)
{
    a = findpar(a);
    b = findpar(b);
    if (a != b)
    {
        if (rank1[a] < rank1[b])
            swap(a, b);
        par[b] = a;
        if (rank1[a] == rank1[b])
            rank1[a]++;
    }
}
bool isprime(ll j)
{

    if (j == 2)
    {
        return true;
    }
    for (ll i = 2; i <= sqrt(j); i++)
    {

        if (j % i == 0)
        {

            return false;
        }
    }
    return true;
}
int main()
{
    ll n;
    cin >> n;
    int flag = 0;
    for (int i = n; i >= 2; i--)
    {

        if (isprime(i))
        {
            // cout<<i<<endl;
            ll x = n - i;
            if (x == 0)
            {
                cout << 1 << endl;
                cout << i << '\n';
                flag = 1;
                break;
            }
            else
            {
                for (int j = x; j >= 2; j--)
                {
                    if (isprime(j))
                    {
                        ll y = x - j;
                        if (y == 0)
                        {
                            cout << 2 << endl;
                            cout << i << " " << j << endl;
                            flag = 1;
                            break;
                        }
                        else
                        {
                            for (int k = y; k >= 2; k--)
                            {
                                if (isprime(k))
                                {
                                    ll z = y - k;
                                    if (z == 0)
                                    {
                                        cout << 3 << endl;
                                        cout << i << " " << j << " " << k << endl;
                                        flag = 1;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    if (flag)
                    {
                        break;
                    }
                }
            }
        }
        if (flag)
        {
            break;
        }
    }
    return 0;
}