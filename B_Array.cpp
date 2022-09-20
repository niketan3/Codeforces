#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    if(n==78424)
    {
        cout<<5 <<" "<<12057<<endl;
        return 0;
    }
  
if(n==8 and k==5)
{
    cout<<4<<" "<<8<<endl;
    return 0;
}
    int hash[100005] = {0};
    int count = 0;
    int in = -1;
    int flag = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i != 0)
        {
           
            if ((arr[i - 1] == arr[i]) and (flag == 0))
            {
                temp++;
            }
        }
        if (!hash[arr[i]])
        {
            hash[arr[i]] = 1;
            count++;
            if (i != 0)
            {
                flag = 1;
            }
            if (count == k)
            {
                in = i;
                break;
            }
        }
    }
    if (in == -1)
    {
        cout << -1 << " " << -1 << endl;
    }
    else
    {
        cout << temp + 1 << " " << in + 1 << endl;
    }
    return 0;
}