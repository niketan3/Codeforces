#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    int b;
    cin>>b;

    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;

    for (int i=0;i<n-1;i++)
    {
        int even=0;
        int odd=0;
        for (int j=i;j>=0;j--)
        {
            if(arr[j]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        // cout<<even<<" "<<odd<<endl;
        if(even==odd)
        {
            v.push_back(abs(arr[i]-arr[i+1]));
        }
    }
    sort(v.begin(),v.end());
    int ans=0;
    for (int i=0;i<v.size();i++)
    {
        if (v[i]<=b)
        {
            b=b-v[i];
            ans++;
        }
    }
    cout<<ans<<endl;


    return 0;
}