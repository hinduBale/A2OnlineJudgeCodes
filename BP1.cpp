//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int test;
//    cin >> test;
//    while(test--)
//    {
//        long long int l, r, flag = 0;
//        cin >> l >> r;
//        for (long long int i = l; i <=r; ++i)
//        {
//            if((i%16) >= 10)
//            {
//                ++flag;
//            }
//        }
//        cout << flag <<endl;
//    }
//    return 0;
//}
#include<bits/stdc++.h>
#define lli long long int
using namespace std;


char decToHexa(lli n)
{
   char hexaDeciNum[100];
   int i = 0;
   while(n!=0)
    {
        int temp  = 0;
        temp = n % 16;
        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n/16;
    }


    for(int j=i-1; j>=0; j--)
        return hexaDeciNum[j];
}


int main()
{
   int test;
   cin >> test;
   while(test--)
   {
       string res;
       lli l, r, flag = 0;
       cin >> l >> r;
       for(lli i = l; i <=r; ++i)
       {
           res = decToHexa[i];
       }
   }
}
