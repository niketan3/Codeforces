#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
        if (arr[i] > ma)
        {
            ma = arr[i];
        }
    }
    sort(arr.begin(), arr.end());
   int flag[n]={0};
   int count=0;
   int k=n-1;
   for(int i=n-1;i>=0;i--)
   {
        if(flag[k]==1)
        {
            i++;
            k--;
        }
        else if(arr[i]*2<=arr[k] and flag[k]==0)
        {
            k--;
            flag[i]=1;
            count++;
        }
   }
   count=n-count;
   cout<<n-min(n/2,count)<<endl;
    return 0;
}