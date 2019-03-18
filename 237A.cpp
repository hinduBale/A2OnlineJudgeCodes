#include <bits/stdc++.h>
#define li long int

using namespace std;

int main()
{
    li customers, Hinput = 0, Minput = 0;
    cin >> customers;
    vector <li> hours, minutes, flag, index;
    for(li i = 0; i < customers; ++i)
    {
        cin >> Hinput;
        cin >> Minput;
        hours.push_back(Hinput);
        minutes.push_back(Minput);
    }
    li j = 0;
    for(li i = 0; i < (hours.size()-1); ++i)
    {
        if(hours[i] == hours[i+1])
        {
            index[0] = i;
            if((hours[index[j]] - hours[i] != 0) && minutes[i] == minutes[i+1])
            {
                ++j;
                ++flag[j];
            }
            else if((hours[index[j]] - hours[i] == 0) && minutes[i] == minutes[i+1])
            {
                ++flag[j];
            }
        }
    }

    sort(flag.begin(), flag.end());
    cout << flag[flag.size() - 1];
    return 0;
}
