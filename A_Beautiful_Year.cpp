#include<bits/stdc++.h>
using namespace std;
bool cheack(int year)
{
    

    int arr[10]={0};
    while(year!=0)
    {
        int x=year%10;
        year=year/10;
        arr[x]++;
    }
    for (int i=0;i<10;i++)
    {
        if(arr[i]>1)
        {
            return 0;
        }
    }
    return 1;
}
int main (){
    int year;
    cin>>year;
    int i=1;
    while(1)
    {
        int d=cheack(year+i);
        if(d==1)
        {
            year=year+i;
            break;
        }
        i++;
    }
    cout<<year;
    return 0;
}