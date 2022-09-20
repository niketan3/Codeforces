#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    int arr1[x];
    
    int maxi = 0, count = 0;
  
    for (int i = 0; i < x; i++)
    {
        cin >> arr1[i];
    }
    cin>>y;
    int arr2[y];
    for (int i = 0; i < y; i++)
    {
        cin >> arr2[i];
    }
    
    for(auto z:arr1)
    {
        for(auto y:arr2)
        {
            if(y%z==0)
            {
                maxi=max(y/z,maxi);
            }
        }
    }
    cout<<maxi<<endl;
    return 0;
}