#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int b = h * 60 + m;
        int h1, m1;
        cin >> h1 >> m1;
        int c = h1 * 60 + m1;
        int h2, m2;
        cin >> h2 >> m2;
        int d = h2 * 60 + m2;
        if (c >= b)
        {
            cout << (abs(b - c) / d) << endl;
        }
        else
        {
            int x = 1440 - c;
            c = x;
            c = c + b;
            cout << c / d << endl;
        }
    }
    return 0;
}
