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
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        ll arr[n];
        int count = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 3)
            {
                sum = sum + arr[i] - 2;
            }
            else if(arr[i]==3)
            {
                sum=sum+1;
            }
            if (arr[i] == 1)
            {
                count++;
            }
        }
        // cout << sum << endl;
        if (count >= 2)
        {
            cout << "CHEFINA" << endl;
            continue;
        }
        if (count == 1)
        {
            if (sum % 2 != 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
        else
        {
            if (sum % 2 == 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
    }
    return 0;
}