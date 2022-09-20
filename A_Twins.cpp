#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
     vector<int> v1;
     int sum=0;
     for (int i=0;i<n;i++)
     {
         int x;
         cin>>x;
          sum=sum+x;
         v1.push_back(x);
     }
     sort(v1.begin(),v1.end());
     int coins=0;
     int sum1=0;
    
     for (int i=n-1;i>=0;i--)
     {
         
         if(sum1<=(sum/2))
         {
             
             sum1=sum1+v1[i];
             coins++;
             
         }
     }
     cout<<coins<<endl;
     
    return 0;
}