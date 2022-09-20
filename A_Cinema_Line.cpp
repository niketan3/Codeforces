#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    int n25 = 0;
    int n50 = 0;
    int n100 = 0;
    int tp;
    bool flag = true;
    while (t--)
    {
        cin >> tp;
        int req = tp - 25;
        // if (req == 25 && n25 > 0)
        // {
        //     n25++;
        // }
        // else if (req == 75 && n50 > 0 && n25 > 0)
        // {
        //     n50--;
        // }
        // else if (req == 75 && n25 > 2)
        // {
        //     n25 -= 2;
        // }
        // else if (req == 0)
        // {
        //     n25++;
        // }
        // else
        // {
        //     flag = false;
        // }
        if (req == 0)
        {
            n25++;
        }
        else if (req == 25 && n25 > 0)
        {
            n50++;
            n25--;
        }
        else if (req == 75 && n50 > 0 && n25 > 0)
        {
            n50--;
            n25--;
            n100++;
        }
        else if (req == 75 && n25 > 2)
        {
            n100++;
            n25 -= 3;
        }
        else
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}