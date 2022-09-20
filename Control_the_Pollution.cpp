#include <bits/stdc++.h>
using namespace std;
int Gascar(int people ,int car)
{
    int carNO=people/4;
    if(people%4!=0)
    {
        carNO++;
    }
    return car*carNO;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int people;
        cin >> people;
        int bus;
        cin >> bus;
        int car;
        cin >> car;
       
        
        if (people <= 100 )
        {
            int gascar = Gascar(people,car);
            if (gascar < bus)
            {
                cout << gascar << endl;
            }
            else
            {
                cout<<bus<<endl;
            }
        }
        else if(Gascar(100,car)<bus)
        {
            cout<<Gascar(people,car)<<endl;
        }
        else
        {
            int busNo=people/100;
            int temp=Gascar(people%100,car);
            int gasBus=busNo*bus;
            if(temp<bus)
            {
                cout<<gasBus+temp<<endl;
            }
            else
            {
                cout<<gasBus+bus<<endl;
            }


        }
    }
    return 0;
}