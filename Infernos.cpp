#include<bits/stdc++.h>
 typedef long long ll;
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int x;
        cin>>n>>x;
        int arr[n];
        int max=0;
        for (int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr[i]=a;
            if(a>max)
            {
                max=a;
            }
        }
        // cout<<max<<endl;
        int power=0;
        
        for (int i=0;i<n;i++)
        {
            if(arr[i]%x==0)
            {
                power=power+(arr[i]/x);
            }
            else
            {
                  power=power+((arr[i]/x)+1);
            }
          
        }
        // cout<<max<<" "<<power<<endl;
        cout<<min(max,power)<<endl;
        
    }
    return 0;
}