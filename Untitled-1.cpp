#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { int t;
            cin>>t;
            long long arr[10000];
             int n=1;
            int flag=0;
            
            for (int j=0;j<10000;j++){
               arr[j]=(n/2)*(2+(n-1)*2);
                
}
            for (int i=0;i<t;i++){
                int x;
                cin>>x;
                for (int j=0;j<10000;j++){
                    if (x>arr[j]){
continue;
                    }else if (x==arr[j]){
                        flag=1;
                    }
                }
                if (flag==1){
                    cout<<"yes"<<endl;
                }else {
                    cout<<"no"<<endl;
                }
                
            }