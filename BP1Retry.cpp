#include<bits/stdc++.h>
#define lli long long int

using namespace std;

int main ()
{
    lli test;
    cin >> test;
    while(test--)
    {
        lli num, temp, i = 1, j, z, flag = 0;
        char hex[5000];
        lli l, r;
        cin >> l >> r;
        for(lli i = l; i <=r; ++i)
        {
           temp = i;
           while(temp != 0)
           {
               z = temp % 16;
               if (z < 10)
                 hex[i++] = z + 48;
               else
                 hex[i++] = z + 55;
               temp = temp / 16;
           }
           for(j = i; j > 0; j--)
           {
               if(hex[j] >= 65 && hex[j]<= 90)
               {
                   ++flag;
               }
           }
        }
        cout << flag << endl;
        flag = 0;
    }


return 0;
}
