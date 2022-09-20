#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if(n==2)
        {
            cout<<-1<<endl;
        }
        else if (n % 2 != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            for(int i=1;i<=n-3;i++)
            {
                cout<<i<<" ";
            }
            cout<<n<<" "<<n-2<<" "<<n-1<<endl;
        }
       
    }
    return 0;
}