#include<bits/stdc++.h>
using namespace std;
int main (){
    long long n;
    cin>>n;
    int arr[n];
    int one=0;
    int two=0;
    int three=0;
    int four=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            one++;
        }
        if(arr[i]==2)
        {
            two++;
        }
        if(arr[i]==3)
        {
            three++;
        }
        if(arr[i]==4)
        {
            four++;
        }
    }
  int sum=four+three;
  
    if(one>three and three!=0)
    {
        one=one-three;
    }
    else if(three!=0)
    {
        one=0;
    }
    sum=sum+(two/2);
    if(two%2!=0)
    {
        if(one>0)
        {
            one=one-2;
            
        }
        sum++;
        
    }
    if(one%4==0 and one >0)
    {
        sum=sum+(one/4);
    }
    else if(one>0)
    {
        sum=sum+(one/4+1);
    }
    cout<<sum<<endl;
    return 0;
}