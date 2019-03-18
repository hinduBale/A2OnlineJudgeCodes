#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;
    int last = n - v;
    int cost = v;
    if(n == 1)
    {
        cout << "0" <<endl;
    }
    else if(last <= 0)
    {
        cout << n - 1 << endl;
    }
    else
    {
         for(int i = 1; i < last; i++)
         {
            cost = cost + (i+1);
         }
         cout << cost << endl;
    }


    return 0;
}
