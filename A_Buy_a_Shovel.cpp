#include <bits/stdc++.h>
using namespace std;
int main()
{
    int price, one;
    cin >> price >> one;
    int x=price;
    if (price % 10 == 0)
    {
        cout <<1 << endl;
    }
    else
    {
        int i = 1;
        while (1)
        {
            if (price % 10 == one)
            {
                cout<<i<<endl;
                break;
            }
            else if(price%10==0)
            {
                // cout<<price<<endl;
                cout<<i<<endl;
                break;
            }
            else
            {
                price=price+x;
            }
            ++i;
        }
        
    }
    return 0;
}