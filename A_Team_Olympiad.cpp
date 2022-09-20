#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int three = 0;
    int one = 0;
    int two = 0;
    int arro[n];
    int arrt[n];
    int arrth[n];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            arro[one] = i;
            one++;
        }
        else if (x == 2)
        {
            arrt[two] = i;
            two++;
        }
        else
        {
            arrth[three] = i;
            three++;
        }
    }
    int mi = min(one, min(two, three));
    cout << mi << endl;
    for (int i=0;i<mi;i++)
    {
        cout<<arro[i]<<" "<<arrt[i]<<" "<<arrth[i]<<endl;
    }
    return 0;
}