#include<bits/stdc++.h>
using namespace std;
int main (){
    long long arr[4];
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    int count=0;
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-100+j;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}