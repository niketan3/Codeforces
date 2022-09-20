#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n, prev, k;
    cin >> n >> k;
    prev = n;
    int flag = 1;
    // int temp=0;
    while ((n % k) != 0 )
    {
        n = n + (n % k);
        // cout<<n<<endl;
        // temp++;
        if (n%k == prev)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}