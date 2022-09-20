 #include<bits/stdc++.h>
  typedef long long ll;
 using namespace std;
 int main (){
     int t;
     cin>>t;
     while(t--)
     {
         int c,d;
         cin>>c>>d;
         int z;
         cin>>z;
         if(z%c==0 and z%d==0)
         {
             cout<<"ANY"<<endl;
         }
        //  else if(z%c==0
         else
         {
             if(z%c==0)
             {
                 cout<<"CHICKEN"<<endl;
             }
             else if(z%d==0)
             {
                 cout<<"DUCK"<<endl;
             }
             else
             {
                 cout<<"NONE"<<endl;
             }
         }
     }
     return 0;
 }