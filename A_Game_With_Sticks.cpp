#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int akshat = 1;
    int malvika = 1;
    int x = col * row;
    while (x != 0)
    {
        if (akshat == 1)
        {
            akshat = 0;  
        }
        else
        {
            akshat=1;
        }
         col--;
         row--;
         x=col*row;
    }
    if(akshat==0)
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika";
    }
    return 0;
}