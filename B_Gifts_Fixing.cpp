#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        int gifts;
        cin>>gifts;
        int can[gifts];
        int ora[gifts];
        int mcan=0;
        int mora=0;
        for (int i=0;i<gifts;i++)
        {
            cin>>can[i];
            if(can[i]<mcan)
            {
                mcan=can[i];
            }
        }
         for (int i=0;i<gifts;i++)
        {
            cin>>ora[i];
            if(ora[i]>mora and can[i]>mcan)
            {
                int x=ora[i]-mora;
                int y=ora[i]-mcan;
                int temp=max(x,y);
                counts=counts+temp;
                
            }
            if(ora[i]<mora)
            {
                mora=ora[i];
            }
        }
        int counts=0;
        for (int i=0;i<gifts;i++)
        {
            if(ora[i]>mora)
            {
                counts=counts+ora[i]-mora;
            }
            if(can[i]>mcan)
            {
                counts=counts+can[i]-mcan;
            }
        }
        cout<<counts<<endl;
    }
    return 0;
}