#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n <= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        int count = 0;
        int i1 = -1;
        int i2 = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                count++;
                if (count == 1 and i != n - 1)
                {
                    i1 = i ;
                }
                if (count == 2 and i != n - 1)
                {
                    i2 = i;
                }
            }
        }
        if (count < 2)
        {
            cout << "YES" << endl;
        }
        else if (count > 2)
        {
            cout << "NO" << endl;
        }
        else if (count == 2 and (i2==-1 or i1==-1))
        {
            cout << "YES" << endl;
        }
       
        else if(count==2 and (arr[i2]<=arr[i1] and arr[i1-1]<=arr[i2+1]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout << "" << endl;
        }
    }

    return 0;
}