#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        vector<int> v1;
        while (n != 0)
        {
            if (n < 10)
            {
                count++;
                v1.push_back(n);
               n=0;
            }
            else if (n < 100)
            {
                if (n % 10 == 0)
                {
                    v1.push_back(n);
                    count++;
                    n = 0;
                }
                else
                {

                    v1.push_back(n - (n % 10));
                    n = n % 10;
                    count++;
                }
            }
            else if (n < 1000)
            {
                if (n % 100 == 0)
                {
                    v1.push_back(n);
                    n = 0;
                    count++;
                }
                else{
                     v1.push_back(n - (n % 100));
                      n = n % 100;
                       count++;
                }
          
            }
            else
            {
                if(n%1000==0)
                {
                    v1.push_back(n);
                    n=0;
                    count++;
                }
                else
                {
                    v1.push_back(n-(n%1000));
                    n=n%1000;
                    count++;
                }
            }
        }
        cout<<count<<endl;
        for (auto it=v1.begin();it!=v1.end();it++)
        {
            cout<<*it<<" ";

        }
        cout<<endl;
    }
    return 0;
}