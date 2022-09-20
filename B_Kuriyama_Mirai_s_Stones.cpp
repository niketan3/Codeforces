#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x],arr1[x],sum=0,ans=0;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int y;
    cin>>y;
    while(y--){
        int a,b,c;
        cin>>a >>b >>c;
        if(a==1)
        {
            for(int i=b;i<=c;i++)
            {
                sum=sum+arr1[i-1];
            }
            cout<<sum<<endl;
        }
        else{
            sort(arr,arr+x);
             for(int i=b;i<=c;i++){
                ans = ans+arr[i-1];
                
            }
            cout<<ans<<endl;

        }
        
    }

    return 0;
}