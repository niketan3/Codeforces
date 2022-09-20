#include<bits/stdc++.h>
using namespace std;

int main (){
    int x,y;
    cin>>x>>y;
    
    float a=log(y)-log(x);
    float b=log(3)-log(2);
  
    int ans=a/b;
    cout<<ans+1<<endl;
    return 0;
}