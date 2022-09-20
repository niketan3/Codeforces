#include<bits/stdc++.h>
using namespace std;
int main (){
    double drinks;
    cin>>drinks;
    float sum=0;
    for (int i=0;i<drinks;i++)
    {
        float x;
        cin>>x;
        sum=sum+x;
    }
    cout<<fixed<<setprecision(12)<<sum/drinks<<endl;
    return 0;
}