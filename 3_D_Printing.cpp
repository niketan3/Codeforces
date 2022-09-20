#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    int index=1;
    while (t--)
    {   
        cout<<"Case #"<<index<<": " ;
        index++;
        int arr1[4];
        int arr2[4];
        int arr3[4];
        cin >> arr1[0];
        cin >> arr1[1];
        cin >> arr1[2];
        cin >> arr1[3];
        cin >> arr2[0];
        cin >> arr2[1];
        cin >> arr2[2];
        cin >> arr2[3];
        cin >> arr3[0];
        cin >> arr3[1];
        cin >> arr3[2];
        cin >> arr3[3];
        int min1 = min(arr1[0], arr2[0]);
        min1 = min(min1, arr3[0]);
        int min2 = min(arr1[1], arr2[1]);
        min2 = min(min2, arr3[1]);
        int min3 = min(arr1[2], arr2[2]);
        min3 = min(min3, arr3[2]);
        int min4 = min(arr1[3], arr2[3]);
        min4 = min(min4, arr3[3]);
        // cout<<min1<<" "<<min2<<" "<<min3<<" "<<min4<<endl;
        if ((min1 + min2 + min3 + min4) == 1000000)
        {
            cout << min1 << " " << min2 << " " << min3 << " " << min4 << endl;
            continue;
        }
        else if ((min1 + min2 + min3) < 1000000)
        {
            cout << "IMPOSSIBLE" <<endl;
            continue;
        }
        // }
        // int max1 = max(min1, min2);
        // max1 = max(max1, min3);
        // max1 = max(max1, min4);
        int timepass[4] = {min1, min2, min3, min4};
        // sort(timepass, timepass + 4, greater<int>());
        int re = 1000000;
        int t1=min(re,timepass[0]);
       
        cout << min(re, timepass[0])<<" ";
        if (timepass[0] > re)
        {
            re = 0;
        }
        else
        {
            re = re - timepass[0];
        }
        cout << min(re, timepass[1]) << " ";
        if (timepass[1] > re)
        {
            re = 0;
        }
        else
        {
            re = re - timepass[1];
        }
        cout<<min(re,timepass[2])<<" ";
        if(timepass[2]>re)
        {
            re=0;
        }
        else
        {
            re=re-timepass[2];
        }
        cout<<min(re,timepass[3])<<" ";
        if(timepass[3]>re)
        {
            re=0;
        }
        else
        {
            re=re-timepass[3];
        }
        cout<<endl;
        // if (max1 == min1)
        // {
        //     cout << min1 << " ";
        //     int re1 = 1000000 - max1;
        //     cout << min(re1, min2) << " ";
        //     if (re1 >= min2)
        //     {
        //         re1 = re1 - min2;
        //     }
        //     else
        //     {
        //         re1 = 0;
        //     }
        //     cout << min(re1, min3) << " ";
        //     if (re1 >= min3)
        //     {
        //         re1 = re1 - min3;
        //     }
        //     else
        //     {
        //         re1 = 0;
        //     }
        //     cout << min(re1, min4) << endl;
        // }
        // else if (max1 == min2)
        // {
        //     int re1 = 1000000 -min2;
        //     cout << min(re1, min1) << " ";
        //     if (re1 >= min1)
        //     {
        //         re1 = re1 - min1;
        //     }
        //     else
        //     {
        //         re1 = 0;
        //     }
        //     cout<<min2<<" ";
        //     cout << min(re1, min3) << " ";
        //     if (re1 >= min2)
        //     {
        //         re1 = re1 - min2;
        //     }
        //     else
        //     {
        //         re1 = 0;
        //     }
        //     cout << min(re1, min4) << endl;
        // }
    }

    return 0;
}