#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll arr[4];
        cin >> arr[0];
        cin >> arr[1];
        cin >> arr[2];
        cin >> arr[3];
        sort(arr, arr + 4, greater<ll>());
        // First is addition  and  // third is subtraction
        ll sum1 = arr[0];
        ll sub1 = arr[2];
        ll a1 = (sum1 + sub1) / 2;
        ll b1 = sum1 - a1;
        ll sub2 = arr[3];
        ll a2 = (sum1 + sub2) / 2;
        ll b2 = sum1 - a2;
        ll sum2 = arr[1];
        ll sub3 = arr[2];
        ll a3 = (sum2 + sub3) / 2;
        ll b3 = sum2 - a3;
        ll sub4 = arr[3];
        ll a4 = (sum2 + sub4) / 2;
        ll b4 = sum2 - a4;
        if (arr[2] == 0 and arr[3] == 0)
        {
            cout << -1<<" "<<-1<<endl;
            continue;
        }
        else if (arr[1] == 0 and arr[2] == 0)
        {
            cout<<-1<<" "<<-1<<endl;
            continue;
        }
        else if (((a1 * b1) == arr[1]) and ((a1 / b1) == arr[3]) )
        {
            if(a1 >=1 and a1<=10000 and b1>=1 and b1<=10000)
            {
                 cout<< a1<< " "<<b1<< endl;
            }
            else
            {
                cout<<-1<<" "<<-1<<endl;
            }
           
            continue;
        }
        // first is addition and fourth is subtraction

        else if (((a2 * b2) == arr[1]) and ((a2 / b2) == arr[2]))
        {
            if(a2 >=1 and a2<=10000 and b2>=1 and b2<=10000)
            {
                 cout<< a2<< " "<<b2<< endl;
            }
            else
            {
                cout<<-1<<" "<<-1<<endl;
            }
            continue;
        }

        // Addition second and subtraction third

        else if (((a3 * b3) == (arr[0])) and ((a3 / b3) == arr[3]))
        {
            if(a3 >=1 and a3<=10000 and b3>=1 and b3<=10000)
            {
                 cout<< a3<< " "<<b3<< endl;
            }
            else
            {
                cout<<-1<<" "<<-1<<endl;
            }
            continue;
        }
        // if Addition is secobd and subtraction is fourth

        else if (((a4 * b4) == arr[0]) and ((a4 / b4) == arr[2]))
        {
           if(a4 >=1 and a4<=10000 and b4>=1 and b4<=10000)
            {
                 cout<< a4<< " "<<b4<< endl;
            }
            else
            {
                cout<<-1<<" "<<-1<<endl;
            }
            continue;
        }
        else
        {
            cout << -1<< " "<< -1 << endl;
        }
    }
    return 0;
}